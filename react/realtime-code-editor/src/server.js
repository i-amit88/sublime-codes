import express from 'express';
import http from 'http';
const app = express();
import { Server } from 'socket.io';
import ACTIONS from './Actions.js';
const server = http.createServer(app);
const io = new Server(server);

const userSocketMap = {};

io.on('connection', (socket) => {
    console.log('socket connected ', socket.id);

    socket.on(ACTIONS.JOIN, ({ roomId, username }) => {
        userSocketMap[socket.id] = username
    })


});



server.listen(5000, () => {
    console.log("server is running");
})