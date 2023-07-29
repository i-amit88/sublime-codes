const http = require('http');
const express = require('express');
const cors = require('cors');
const socketIO = require('socket.io');
const app = express();

app.use(cors()); // for intercommunication between urls
const server = http.createServer(app);


const io = socketIO(server);

app.get('/',(req, res)=>{
    res.send('working');
})

io.on('connection',()=>{
    console.log('new connection connected');
});


const port  = 4500 || process.env.PORT;

server.listen(port,()=>{
    console.log(`server is running on ${port}`);
})