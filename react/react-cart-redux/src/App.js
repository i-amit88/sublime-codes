import React from 'react'
import "./styles/App.scss"
import { BrowserRouter as Router,Routes,Route } from 'react-router-dom'
import Home from './Components/Home'
import Header from './Components/Header'
import { Toaster } from 'react-hot-toast'


function App() {
  return (
    <Router>
    <Header />
      <Routes>
        <Route path='/' element={<Home />}/>
      </Routes>
      <Toaster />
    </Router>
  )
}

export default App