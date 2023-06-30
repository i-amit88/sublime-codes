import { type } from '@testing-library/user-event/dist/type';
import React from 'react'
import { useDispatch,useSelector } from 'react-redux';
import Store from './Store';

function Home() {
    const dispatch = useDispatch();   // disapatch uses store from provider 

        // const value =20;
    const a  = useSelector((state) => state.custom.a);
    console.log(a);

    const addbtn = () =>{
        dispatch({
            type:"increment",   // calling the reducer for the action
        });
    };

    const subbtn = () =>{
        dispatch({
            type:"decrement",
        });
    };


  return (
    <>
        <div>
            <h2>{a}</h2>
            <button onClick={addbtn}>Increment</button>
            <button onClick={subbtn}>Decrement</button>
        </div>
    </>
  )
}

export default Home;