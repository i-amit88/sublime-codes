import {BrowserRouter as Router,Route,Routes} from "react-router-dom";
import {Provider} from "react-redux";
import store from "./store/store";
import Navbar from "./Compoments/Navbar";
import Home from './pages/Home';
import Cart from './pages/Cart';

function App() {
  return (
    <div className="app">
    <Provider store={store}>
    <Router>
    <Navbar />
      <Routes>
        <Route  path='/' element={<Home />}/>
        <Route  path='/cart' element={<Cart />}/>
      </Routes>
    </Router>
    </Provider>
    </div>
  );
}

export default App;
