import React from 'react';
import {BrowserRouter as Router,Route,Routes} from 'react-router-dom';
import Header from "./components/Header";
import Home from './components/Home';
import Footer from './components/Footer';
import Videos from './components/Videos';
import UploadVideo from './components/UploadVideo';
import Login from './components/Login';
import SignUp from './components/SignUp';



function App() {
  return (
    <Router>
    <Header/>
      <Routes>
        <Route path="/" element={<Home/>}/>
        <Route path="/videos" element={<Videos/>}/>
        <Route path="/upload" element={<UploadVideo/>}/>
        <Route path="/login" element={<Login/>}/>
        <Route path="/signup" element={<SignUp/>}/>

      </Routes>
      <Footer></Footer>
    </Router>

  );
}

export default App;
