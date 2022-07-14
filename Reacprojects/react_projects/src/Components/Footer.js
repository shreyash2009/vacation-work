import React from 'react'
import './Footer.css'

const Footer = () => {
        let date = new Date();
        let year = date.getFullYear();
        console.log(year)
   
  return (
    <>
    <footer>
    <div class="foot">
        
        <div class="social">
            <h4>Social Media</h4>
            <ul>
                <li><a href="https://github.com/shreyash2009" target="_blank"><i class="fab fa-github"></i></a></li>
                <li><a href="https://www.linkedin.com/in/shreyash-chaple-2b45aa213 " target="_blank"><i class="fab fa-linkedin"></i></a></li>
                <li><a href="#" target="_blank"><i class="fab fa-twitter"></i></a></li>
                <li><a href="https://www.instagram.com/shreyash_20.09?r=nametag" target="_blank"><i class="fab fa-instagram"></i></a></li>
            </ul> 
        </div>
        
        
        <h5>Copyright &copy {year}; Shreyash Chaple</h5>
    </div>
   
</footer>
    </>
  )
}

export default Footer