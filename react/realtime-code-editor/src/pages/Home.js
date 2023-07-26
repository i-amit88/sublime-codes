import React, { useState } from 'react'
import { toast } from 'react-hot-toast';
import { v4 as uuidV4 } from 'uuid';
import { useNavigate } from 'react-router-dom';

const Home = () => {

    const navigate = useNavigate();

    const [roomId, setRoomId] = useState('');
    const [username, setUsername] = useState('');

    const createRoom = (e) => {
        e.preventDefault(); // prevents from reloading itself
        const id = uuidV4();
        setRoomId(id);
        toast.success("Created New Room");
    }

    const joinroom = () => {

        if (!roomId || !username) {
            toast.error("Room Id and UserName Required");
            return;
        }
        navigate(`/editor/${roomId}`, {
            state: {
                username,
            }
        });
    }
    // react router dom passes the state to use in different pages rather than using redux store , Local Storage , Url passing

    const handleKeyEnter = (e) =>{
        if(e.code == 'Enter') joinroom();
    }

    return (
        <div className='homepageWrapper'>
            <div className="formWrapper">
                <img className="homePageLogo" src="/code-sync.png" alt="" />
                <h4 className='mainLabel'>Paste your Room ID here</h4>
                <div className="inputGroup">
                    <input onKeyUp={handleKeyEnter} className='inputBox' type="text" placeholder='ROOM ID' value={roomId} onChange={(e) => setRoomId(e.target.value)} />
                    <input onKeyUp={handleKeyEnter} className='inputBox' type="text" placeholder='USERNAME' onChange={(e) => setUsername(e.target.value)} />

                </div>
                <button onClick={joinroom} className='btn joinBtn'>Join Room</button>
                <span className="createInfo">If you don't have an Invite &nbsp; <a onClick={createRoom} className='createNewBtn' href="">New room</a></span>

            </div>
            <footer>
                <h4>Made with 💛 by <a href="https://www.github.com/i-amit88">Amit</a></h4>
            </footer>
        </div>
    )
}

export default Home