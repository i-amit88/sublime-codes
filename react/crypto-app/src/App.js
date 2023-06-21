import { BrowserRouter as Router,Routes,Route } from 'react-router-dom'
import React from 'react'
import Home from './Components/Home'
import Coins from './Components/Coins'
import Exchanges from './Components/Exchanges'
import CoinDetails from './Components/CoinDetails'
import Header from './Components/Header'


function App() {
  return (

    <Router>
    <Header/>
      <Routes>
        <Route path='/' element={<Home/>}/>
        <Route path='/coins' element={<Coins/>}/>
        <Route path='/exchanges' element={<Exchanges/>}/>
        <Route path='/coin/:id' element={<CoinDetails/>}/>
      </Routes>
    </Router>

  )
}

export default App