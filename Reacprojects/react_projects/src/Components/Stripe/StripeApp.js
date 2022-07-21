import React from 'react'
import Hero from './Hero'
import Navbar from './Navbar'
import Submenu from './Submenu'
import SideBar from './SideBar'
import  data from './Data'
import './Strip.css'

const StripeApp = () => {
  return (
    <>
    <Navbar/>
    <Hero/>
    <SideBar/>
    <Submenu/>
    </>
  )
}

export default StripeApp