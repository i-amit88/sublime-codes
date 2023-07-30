import React, { useEffect, useState } from 'react'
import socketIO from 'socket.io-client';
import './Chat.css';
import { user } from '../join/Join';
import sendLogo from '../../images/send.png'
import Message from '../Messages/Message';
import ReactScrollToBottom from 'react-scroll-to-bottom';
import closeIcon from '../../images/closeIcon.png'

let socket;
const ENDPOINT = 'http://localhost:4500';

const Chat = () => {

    const [id, setId] = useState();
    const [messages, setMessages] = useState([]);

    console.log(messages);



    const send = () => {
        const message = document.getElementById('chatInput').value;
        socket.emit('message', { message, id });
        document.getElementById('chatInput').value = "";
    }

    const send2 = ()=>{

    }


    useEffect(() => {
        socket = socketIO(ENDPOINT, { transports: ['websocket'] });

        socket.on('connect', () => {
            // alert('connected');
            setId(socket.id)
        });

        socket.emit('joined', { user });

        socket.on('welcome', (data) => {
            setMessages([...messages,data]);
        });

        socket.on('userJoined', (data) => {
            setMessages([...messages,data]);
        });

        socket.on('leave', (data) => {
            setMessages([...messages,data]);
        })

        return () => {
            socket.emit('disconnect');
            socket.off();
        }


    }, []);


    useEffect(() => {
        socket.on('sendMessage', (data) => {
            setMessages([...messages,data]);
        })

        return () => {
            socket.off();
        }
    }, [messages]);


    return (
        <div className='chatPage' >
            <div className="chatContainer">
                <div className="header">
                    <h2>C CHAT</h2>
                    <a href="/"><img src={closeIcon} alt="close" /></a>
                </div>
                <ReactScrollToBottom className="chatBox">
                    {
                        messages.map((item,i)=>(
                             <Message key={item.id} message={item.message} user={item.id === id?'':item.user} classs={ item.id === id?'right':'left'} />
                        ))
                    }
                </ReactScrollToBottom>
                <div className="inputBox">
                    <input type="text" id="chatInput" onKeyUp={(event)=> event.key === 'Enter'?send() : null}/>
                    <button onClick={send} className="sendBtn"><img src={sendLogo} alt="Send" /></button>
                </div>
            </div>
        </div>
    )
}

export default Chat