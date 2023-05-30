const daysEl = document.getElementById("days");
const hoursEl = document.getElementById("hours");
const minutesEl = document.getElementById("minutes");
const secondEl = document.getElementById("seconds");

const newYear = "1 Jan 2024";

function countdown(){
    const newYearDate = new Date(newYear);
    const currentDate = new Date();

    const totalSeconds = (newYearDate - currentDate)/1000;
    const days = Math.floor(totalSeconds / 3600 /24);
    const hours = Math.floor(totalSeconds /3600) %24;
    const minutes = Math.floor(totalSeconds /60) %60;
    const second = Math.floor(totalSeconds) %60;

    daysEl.innerHTML = formatTime(days);
    hoursEl.innerHTML = formatTime(hours);
    minutesEl.innerHTML = formatTime(minutes);
    secondEl.innerHTML = formatTime(second);


}

function formatTime(time){
    return time < 10 ? `0${time}` : time;
}

countdown();
setInterval(countdown,1000);