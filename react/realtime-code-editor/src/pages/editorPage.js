import React, { useEffect, useRef, useState } from 'react'
import Client from '../Components/Client.jsx';
import { Editor } from '../Components/Editor.jsx';
import { initSocket } from '../socket.js';
import ACTIONS from '../Actions.js'
import { useLocation, useNavigate, Navigate, useParams } from 'react-router-dom';
import { toast } from 'react-hot-toast';


const EditorPage = () => {



  const socketRef = useRef(null);

  const location = useLocation();
  const { roomId } = useParams();
  const reactNavigator = useNavigate();

  const [client, setClient] = useState([{
    socketID: 1,
    username: 'Rakesh K',
  }, {
    socketID: 2,
    username: 'John Doe',
  },]);


  useEffect(() => {
    const init = async () => {
      socketRef.current = await initSocket();  // await because  initSocket is async and to accept promise

      socketRef.current.on('connect_error', (err) => handleErrors(err));
      socketRef.current.on('connect_failed', (err) => handleErrors(err));


      function handleErrors(e) {
        console.log('socket error', e);
        toast.error('Socket connection failed , try again later.');
        reactNavigator('/');
      }

      socketRef.current.emit(ACTIONS.JOIN, {
        roomId,
        username: location.state?.username,
      });
    }

    init();
  }, []);

  if (!location.state) {
    return <Navigate to='/' />
  }



  return (
    <div className='mainWrap'>
      <div className="aside">
        <div className="asideInner">
          <div className="logo">
            <img className='logoImage' src="/code-sync.png" alt="Code Sync" />
          </div>
          <h3>Connected</h3>
          <div className="clientsList">
            {
              client.map((client) => {
                return <Client key={client.socketID} username={client.username} />
              })
            }
          </div>

        </div>
        <button className="btn copyBtn">Copy ROOM ID</button>
        <button className="btn leaveBtn">Leave</button>
      </div>
      <div className="editorWrap"><Editor /> </div>
    </div>
  )
}

export default EditorPage