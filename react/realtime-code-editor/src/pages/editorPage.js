import React, { useState } from 'react'
import Client from '../Components/Client';
import { Editor } from '../Components/Editor';

const EditorPage = () => {
  const [client,setClient] = useState([{
    socketID:1,
    username:'Rakesh K',
  },{
    socketID:2,
    username:'John Doe',
  },]);

  
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
                 return <Client key={client.socketID} username={client.username}/>
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