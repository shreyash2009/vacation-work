import React from 'react'
import dev_img from  './media/react-js-developer.png';
import './App.css'
import Footer from './Components/Footer';
const App = () => {
  return (
    <>
    <header><h1>React Projects</h1></header>
    <div className='img-container'><img src={dev_img} alt='img'/></div>
    
    <div className='projects-container'>
      <div className="card-body" >
        <img src='https://images.pexels.com/photos/913136/pexels-photo-913136.jpeg?auto=compress&cs=tinysrgb&dpr=1&w=500' alt='project-img' height="240px"/>
        <a href='google.com'><h4>Birthday-Remainder</h4></a>
      </div>
      <div className="card-body" >
        <img src='https://images.pexels.com/photos/913136/pexels-photo-913136.jpeg?auto=compress&cs=tinysrgb&dpr=1&w=500' alt='project-img' height="240px"/>
        <a href='google.com'><h4>Birthday-Remainder</h4></a>
      </div>
      <div className="card-body" >
        <img src='https://images.pexels.com/photos/913136/pexels-photo-913136.jpeg?auto=compress&cs=tinysrgb&dpr=1&w=500' alt='project-img' height="240px"/>
        <a href='google.com'><h4>Birthday-Remainder</h4></a>
      </div>
      <div className="card-body" >
        <img src='https://images.pexels.com/photos/913136/pexels-photo-913136.jpeg?auto=compress&cs=tinysrgb&dpr=1&w=500' alt='project-img' height="240px"/>
        <a href='google.com'><h4>Birthday-Remainder</h4></a>
      </div>
      <div className="card-body" >
        <img src='https://images.pexels.com/photos/913136/pexels-photo-913136.jpeg?auto=compress&cs=tinysrgb&dpr=1&w=500' alt='project-img' height="240px"/>
        <a href='google.com'><h4>Birthday-Remainder</h4></a>
      </div>
      <div className="card-body" >
        <img src='https://images.pexels.com/photos/913136/pexels-photo-913136.jpeg?auto=compress&cs=tinysrgb&dpr=1&w=500' alt='project-img' height="240px"/>
        <a href='google.com'><h4>Birthday-Remainder</h4></a>
      </div>
    </div>
    <Footer/>
    </>
  )
}

export default App