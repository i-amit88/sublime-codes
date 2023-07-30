const http = require('http');
const express = require('express');
const cors = require('cors');
const socketIO = require('socket.io');
const app = express();

app.use(cors()); // for intercommunication between urls
const server = http.createServer(app);


const io = socketIO(server);

const users = [{}];

app.get('/',(req, res)=>{
    res.send('working');
})

io.on('connection',(socket)=>{    // io is the circuit and socket is the users
    console.log('new connection connected');

    socket.on('joined',({user})=>{  // reveives the data from the ui
        users[socket.id] = user;
        console.log("user is ",user); 
        console.log("list is ",users); 
        socket.broadcast.emit('userJoined',{user:'Admin',message:`${users[socket.id]} has joined`});  
        socket.emit('welcome',{user:'Admin',message:`Welcome to the chat, ${users[socket.id]} `}); // emit sends the data and welcome is the event name
    });

    socket.on('disconnect',()=>{ 
        socket.broadcast.emit('leave',{user:'Admin',message:`${users[socket.id]} has left`}); 
        console.log('user left');  
    });

    socket.on('message',({message,id})=>{
        io.emit('sendMessage',{user:users[id],message,id})                         // io is the whole circuit
    })





});


const port  = 4500 || process.env.PORT;

server.listen(port,()=>{
    console.log(`server is running on ${port}`);
})