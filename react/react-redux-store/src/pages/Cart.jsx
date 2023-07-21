import React from 'react'
import { useSelector,useDispatch } from 'react-redux';
import { remove } from '../store/cartSlice';

function Cart() {
  const dispatch = useDispatch();
  const products = useSelector(state=>state.cart);
  function handleRemove(products) {
    dispatch(remove(products.id));
  }

  return (
    <div>
      <h3>Cart</h3>
      <div className="cartWrapper">
        {
          products.map(products=>(
            <div className="cartCard" key={products.id}>
              <img src={products.image} alt="" />
              <h5>{products.title}</h5>
              <h5>{products.price} </h5>
              <button onClick={()=>{handleRemove(products)}} className="btn">Remove</button>
            </div>
          ))
        }
      </div>
    </div>
  )
}

export default Cart