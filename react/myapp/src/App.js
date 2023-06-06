
import { BrowserRouter as Router, Route, Routes } from "react-router-dom";
import  Header  from "./components/Header";
import Home from "./components/Home";
import Footer from "./components/Footer";

import "./styles/App.scss"
import "./styles/header.scss"
import "./styles/Home.scss"
import "./styles/footer.scss"

function App() {
  return (
    <Router>
    <Header />
      <Routes>
        <Route path="/" element={<Home></Home>} />
      </Routes>
      <Footer />
    </Router>
  );
}

export default App;
