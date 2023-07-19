import { createReducer } from "@reduxjs/toolkit";

const initalState = {   // initial state will be like varibales which needs to be watched
    a:0,
}

export const customReducer = createReducer(initalState,{  //create reducer take 2 objects state and reducers ie action

    increment:(state) =>{
        state.a += 1;
    },
    decrement:(state) =>{
        state.a -= 1;
    }
})
// createSlice is the function to create reducer
//Async Thunk