import express from "express";
import mongoose from "mongoose";

const app = express();

app.use(express.json());
mongoose.connect("mongodb://127.0.0.1:27017",{dbName:"api-demo"}).then(()=>{
    console.log("connection successfull")
}).catch((err)=>{
    console.log(err);
});

const Schema = new mongoose.Schema({
    name:String,
    email:String,
    password:String,
});

const User = mongoose.model("api-model",Schema);

app.get("/",(req,res)=>{
    res.send("Nice Working");
});
app.get("/userid",async (req,res)=>{
    const {id} = req.body;
    const user = await User.findById(id);
    res.json({
        success:true,
        user,
    })
});
app.get("/userid/:id",async (req,res)=>{
    const {id} = req.body;
    console.log(req.params);
    const user = await User.findById(id);
    res.json({
        success:true,
        user,
    })
});
app.get("/users/all",async (req,res)=>{

    console.log(req.query);
    console.log(req.query.keyword);

    const users = await User.find({});
    res.json({
        success:true,
        users: users,
    })
});
app.post("/users/new",async (req,res)=>{

    const {name,email,password} = req.body;

    const users = await User.create({
       name,
       email,
       password,
    })
    res.cookie("tempi","newcookie").json({
        success:true,
        message:"Registered successfully"
    });
});


app.listen(4000,()=>{
    console.log("server is running");
});