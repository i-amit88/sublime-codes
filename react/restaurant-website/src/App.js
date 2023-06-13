import Navbar from "./components/Navbar";
import './App.css'
import { BrowserRouter as Router, Routes,Route} from "react-router-dom";
import Home from "./pages/Home";

function App() {
  return (
    <div className="App">
    <Router>
    <Navbar/>
    <Routes>
      <Route path="/" exact Component={Home}/>
    </Routes>
    </Router>
    </div>
    
   
  );
}

export default App;
