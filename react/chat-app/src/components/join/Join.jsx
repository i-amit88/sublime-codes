import React, { useState } from 'react'
import "./Join.css";
import logo from '../../images/logo.png';
import { Link } from 'react-router-dom';

let user;

const sendUser = ()=>{
  user = document.getElementById('joinInput').value;
  document.getElementById('joinInput').value= '';
}

const Join = () => {


  

  const [name, setName] = useState('');

  return (
    <div className='joinPage'>
      <div className="JoinContainer">
        <img src={logo} alt="" />
        <h1>C Chat</h1>
        <input onChange={(e) => {
          setName(e.target.value)
        }} placeholder='Enter Your Name' type="text" id="joinInput" />
        <Link to='/chat' onClick={(event) => !name?event.preventDefault():null} >
          <button  className='joinBtn' onClick={sendUser} >Log in</button></Link>
    </div>
    </div >
  )
}

export default Join
export {user};