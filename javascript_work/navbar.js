const menu_btn = document.querySelector('.menu-btn');
    const nav = document.querySelector('.nav-links');
    menu_btn.addEventListener('click', ()=>{
        menu_btn.classList.toggle('active');
        nav.classList.toggle('active');
    })