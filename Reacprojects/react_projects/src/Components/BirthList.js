import React from 'react'
import './Birth.css'
const BirthList = ({ people }) => {
  return (
    <>
        { people.map((person)=>{
            const {id, name, age, image} = person;
            return(
                <article key={id} className='person'>
            <img src={image} alt={name} />
            <div className='info'>
              <h4>{name}</h4>
              <p>{age} years</p>
            </div>
          </article>
            )
        })

        }
    </>
  )
}

export default BirthList