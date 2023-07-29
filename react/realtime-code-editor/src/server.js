import express from 'express';
import http from 'http';
const app = express();
import { Server } from 'socket.io';
import ACTIONS from './Actions.js';
const server = http.createServer(app);
const io = new Server(server);

const userSocketMap = {};

function getAllConnectedClients(roomId) {
    // returns map
    return Array.from(io.sockets.adapter.rooms.get(roomId)|| []).map((socketId)=>{
        return {
            socketId,
            username:userSocketMap[socketId],
        }
    });
    // we are getting array of all connceted sockets and returning the clients info

}

io.on('connection', (socket) => {
    console.log('socket connected ', socket.id);

    socket.on(ACTIONS.JOIN, ({ roomId, username }) => {
        userSocketMap[socket.id] = username;
        socket.join(roomId);
        console.log('map is',userSocketMap);

        const clients = getAllConnectedClients(roomId);
        console.log('client is ',clients);
        clients.forEach((socketId)=>{
            io.to(socketId).emit(ACTIONS.JOINED,{
                clients,
                username,
                socketId:socket.id,
            });
            console.log('clients is ', clients);
        
        })

    })


});



server.listen(5000, () => {
    console.log("server is running");
})