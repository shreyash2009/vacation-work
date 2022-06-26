let string="";
const btns = document.querySelectorAll('.button');

btns.forEach((button)=>{
    button.addEventListener('click', (e)=>{
        
        if(e.target.innerHTML == '='){
            string = eval(string);
            let inp =document.getElementById('inp');
            inp.value = string;
        }
        else if(e.target.innerHTML == 'CLEAR'){
            string ="";
            let inp = document.getElementById('inp');
            inp.value = string;
        }
        else{
            string = string + e.target.innerHTML;
            let inp = document.getElementById('inp');
            inp.value = string;
        }
        
    });
});

let input = document.getElementById('inp');
input.addEventListener('keypress',(e)=>{
    if(e.key =="Enter"){
        string = eval(input.value);
        input.value = string;
    }
    else if(e.key == "Backspace"){
        string= input.value;
        string-=string[string.length];
    }
})
