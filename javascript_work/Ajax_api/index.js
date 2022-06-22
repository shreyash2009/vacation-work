const  container = document.querySelector("#container");
    const request = new XMLHttpRequest();
    request.open('GET', 'https://restcountries.com/v2/name/nepal');
    request.send();
    
    //to get the response 
    request.addEventListener('load', function (){
        // const data = this.responseText(); we are getting data in the form of pure json we have to convert it into object format 
        const [data] = JSON.parse(this.responseText);
        console.log(data.capital);
        const htmldata= `<div class="details">
        <h3> Country Name:- <span>${data.name}</span></h3>
        <h3> Population:- <span>${data.population}</span></h3>
        <h3> Native Name:- <span>${data.nativeName}</span></h3>
        <h3> Capital:- <span>${data.capital}</span></h3>
     </div>
     <div class="flag">
         <img src="${data.flag}" alt="image">
     </div>`;
    
     container.insertAdjacentHTML("afterbegin", htmldata)
        
    });