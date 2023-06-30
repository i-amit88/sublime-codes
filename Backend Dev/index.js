const express = require("express");
const path = require("path");
const bodyParser = require("body-parser");
const mongoose = require("mongoose");

mongoose.connect("mongodb://127.0.0.1:27017",{dbName:"mydatabase"}).then(()=>{
    console.log("connection successfull")
}).catch((err)=>{
    console.log(err);
});


const schema = new mongoose.Schema({
    name:String,
    email:String,
    password:String
});




const app =express() // created the server\
const port = 5500;
app.use(bodyParser.urlencoded({extended:false}));

app.get("/",(req, res)=>{    // requesting from server
    // console.log(path.join(__dirname+"/index.html"));
    res.sendFile(path.join(__dirname+"/index.html"));  // res is sending the response
});

// app.post("/login",async (req,res)=>{    //post is sending the data to the server at specified location which action specifies
//     console.log("response got"),
//     res.send("<h1>Done</h1>"),
//     console.log(req.body),
    
//      await new_collection.create({
//         name:req.body.name,
//         email:req.body.email,
//         password:req.body.password,

//     })
//     console.log(req.body.name);
//     console.log(req.body.email);
//     console.log(req.body.password);
// })


app.post("/login",(req,res)=>{
        res.cookie("new-token","logged in");
        res.send("<h1>Cookie saved</h1>");
});




// const new_collection = new mongoose.model("newModel",schema);

// const adder = async ()=>{
//     const ss = await new_collection.create({
//         name:"yoyo",
//         workout:"NO",
//     })
// }

// adder();


app.listen(port, ()=>{     
    console.log("server is running");
});




