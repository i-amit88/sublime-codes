
import mongoose from "mongoose";

mongoose.connect("mongodb://127.0.0.1:27017",{dbName:"mydatabase"}).then(()=>{
    console.log("connection successfull")
}).catch((err)=>{
    console.log(err);
});


const schema = new mongoose.Schema({
    name:String,
    workout:String,
});

const new_collection = new mongoose.model("newModel",schema);

const adder = async ()=>{
    const ss = await new_collection.create({
        name:"yoyo",
        workout:"NO",
    })
}

adder();