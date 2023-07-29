import React, { useEffect } from 'react'
import socketIO from 'socket.io-client';
import './Chat.css';
import {user} from '../join/Join';

const ENDPOINT = 'http://localhost:4500';

const Chat = () => {

    const socket = socketIO(ENDPOINT,{transports:['websocket']});

    useEffect(()=>{

        socket.on('connect',()=>{
            alert('connected');
        })

    },[socket])

  return (
    <div className='chatPage' >
        <div className="chatContainer">
            <div className="header"></div>
            <div className="chatBox"></div>
            <div className="inputbox">{user}</div>
        </div>
    </div>
  )
}

export default Chat