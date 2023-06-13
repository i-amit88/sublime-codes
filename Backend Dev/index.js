const express = require("express");
const path = require("path");
const bodyParser = require("body-parser");


const app =express() // created the server\
const port = 3000;
app.use(bodyParser.urlencoded({extended:false}));

app.get("/",(req, res)=>{    // requesting from server
    console.log(path.join(__dirname+"/index.html"));
    res.sendFile(path.join(__dirname+"/index.html"));  // res is sending the response
});

app.post("/api/v1/login",(req,res)=>{    //post is sending the data to the server at specified location which action specifies
    console.log("response got");
    res.send("<h1>Done</h1>");
    console.log(req.body);
})


app.listen(port, ()=>{     
    console.log("server is running");
});




