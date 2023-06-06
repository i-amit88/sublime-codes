
import { BrowserRouter as Router, Route, Routes } from "react-router-dom";
import  Header  from "./components/Header";
import Home from "./components/Home";
import Footer from "./components/Footer";
import Contact from "./components/Contact";
import Services from "./components/Services"

import "./styles/App.scss"
import "./styles/header.scss"
import "./styles/Home.scss"
import "./styles/footer.scss"
import "./styles/services.scss"
import "./styles/Contact.scss"

function App() {
  return (
    <Router>
    <Header />
      <Routes>
        <Route path="/" element={<Home></Home>} />
        <Route path="/contact" element={<Contact />} />
        <Route path="/services" element={<Services />} />
      </Routes>
      <Footer />
    </Router>
  );
}

export default App;
