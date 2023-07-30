import React from 'react'
import { BrowserRouter as Router, Route,Routes } from 'react-router-dom'
import Join from './components/join/Join'
import "./App.css";
import Chat from './components/Chat/Chat';


const App = () => {

  return (
    <div className="App">
    <Router>
    <Routes>
      <Route path='/' element={<Join />} />
      <Route path='/chat' element={<Chat/>} />
      </Routes>
    </Router>
    </div>
  )
}

export default App