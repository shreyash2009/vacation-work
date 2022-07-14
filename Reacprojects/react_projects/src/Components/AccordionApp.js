import React from 'react'
import './Accordion.css'
import AccordionQue from './AccordionQue'
import data from '../media/AccordionData'
const AccordionApp = () => {

  return (
    <main>
        <h1>Accordion</h1>
        <section className='Container'>
            {
                data.map((question)=>{
                    return (
                        <AccordionQue key={question.id} {...question}/>
                    )
                })

            }
        </section>
    </main>
  )
}

export default AccordionApp