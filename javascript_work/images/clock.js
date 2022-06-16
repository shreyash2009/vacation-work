 // Time part
 setInterval(() => {
    const time = document.querySelector(".time");
    let date = new Date();
    let hours = date.getHours();
    let minutes = date.getMinutes();
    let seconds = date.getSeconds();
    let day_night = "AM";
    if (hours > 12) {
      hours = hours - 12;
      day_night = "PM";
    }
    if (hours < 10) {
      hours = "0" + hours;
    }
    if (minutes < 10) {
      minutes = "0" + minutes;
    }
    if (seconds < 10) {
      seconds = "0" + seconds;
    }

    time.textContent =
      hours + ":" + minutes + ":" + seconds + " " + day_night;
  });

  // Date part
  let date = new Date();
  let todayDate = date.getDate();
  let month = date.getMonth() + 1;
  let year = date.getFullYear();
  const today = document.querySelector(".date");
  today.innerHTML = todayDate + "/" + month + "/" + year;

  // Day part
  let day = date.getDay();
  const Today = document.querySelector(".day");
  var days = [
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
  ];
  Today.innerHTML = days[day - 1];

  // Stopwatch section
  const timer = document.querySelector(".timer");
  var hr = 0;
var min = 0;
var sec = 0;
var stoptime = true;

function startTimer() {
if (stoptime == true) {
      stoptime = false;
      timerCycle();
  }
}
function stopTimer() {
if (stoptime == false) {
  stoptime = true;
}
}

function timerCycle() {
  if (stoptime == false) {
  sec = parseInt(sec);
  min = parseInt(min);
  hr = parseInt(hr);

  sec = sec + 1;

  if (sec == 60) {
    min = min + 1;
    sec = 0;
  }
  if (min == 60) {
    hr = hr + 1;
    min = 0;
    sec = 0;
  }

  if (sec < 10 || sec == 0) {
    sec = '0' + sec;
  }
  if (min < 10 || min == 0) {
    min = '0' + min;
  }
  if (hr < 10 || hr == 0) {
    hr = '0' + hr;
  }

  timer.innerHTML = hr + ':' + min + ':' + sec;

  setTimeout("timerCycle()", 1000);
}
}

function resetTimer() {
  timer.innerHTML = '00:00:00';
}