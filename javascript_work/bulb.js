const back = document.querySelector('body');
    const on= document.querySelector('#on');
    const off = document.querySelector('#off');
    let lights=false;

    on.addEventListener('click', function(){
        if(lights==false){
            lights=true;
            back.style.backgroundColor='white';
        }
    });
    off.addEventListener('click', function(){
        if(lights=true){
            lights==false;
            back.style.backgroundColor='black';
        }
    });