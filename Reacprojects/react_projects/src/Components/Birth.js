import React, {useState}from 'react'
import data from '../media/Birthdata.js'
import BirthList from './BirthList.js'
import './Birth.css'
const Birth = () => {
    const [people, setPeople] = useState(data);
  return (
    
    <>
        <div className='container'>
            <h3>{people.length} birthdays today</h3>
            <BirthList people={people}/>
            <button onClick={()=>{
                setPeople([])
            }}> Clear All</button>
        </div>
    </>
  )
}

export default Birth