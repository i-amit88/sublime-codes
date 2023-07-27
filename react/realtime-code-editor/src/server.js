const express = require('express');
const http = require('http');
const app = express();
const {Server} = require('socket.io');
const { default: ACTIONS } = require('./Actions');

const server = http.createServer(app);
const io = new Server(server);

const userSocketMap ={};

io.on('connection',(socket)=>{
    console.log('socket connected ', socket.id);

    socket.on(ACTIONS.JOIN,({roomId,username})=>{
        userSocketMap[socket.id] = username,
    })


});



server.listen(5000,()=>{
    console.log("server is running");
})