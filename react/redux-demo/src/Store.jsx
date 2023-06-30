import { configureStore } from "@reduxjs/toolkit";
import {customReducer} from "./Reducers";

const Store = configureStore({
    reducer:{
        custom:customReducer
    },
});


export default Store;