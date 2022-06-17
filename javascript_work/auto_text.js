const text= document.querySelector('.heading');
const options = ["Shreyash Chaple", "A Tech Enthusiast", "A Programmer","A web Developer"];
let first = 0;
let char = 0;
update();

function update(){
    char++;
    text.innerHTML = `<h1>I am ${options[first].slice(0,char)} </h1>`;
    if(char === options[first].length){
        first++;
        char=0;
    }
    if(first === options.length){
        first=0;
    }
    setTimeout(update,150);
}
