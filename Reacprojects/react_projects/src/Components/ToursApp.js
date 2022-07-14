import React, { useEffect, useState } from 'react'
import Loading from './Loading'
import './Tours.css'
import Tours from './Tours'

const url = 'https://course-api.com/react-tours-project'
const ToursApp = () => {
    const [loading, setLoading] = useState(true);
    const [tours, setTours] = useState([]);

    //let's aset upthe remove functionality 
    //As we are having tours data in this component so its better to define remove function here 
    const removeTour = (id)=>{
        //in the remove function we will be having id  so the function will know which destination we need to remove 
        const newTours = tours.filter((tour)=>tour.id !== id);        //filter function will return tours with no matching id
        setTours(newTours);
    }




    const fetchData = async()=>{
        
        setLoading(true);
        try {const res =  await fetch(url);
            const tours = await res.json();
            setLoading(false);
            setTours(tours);
            
        } catch (error) {
            setLoading(false);
            console.log("ERROR");
        }

    }

    useEffect(()=>{
        fetchData()
    },[]);

    if(loading){
        return(
            <main>
        <Loading />
      </main>
        )
    }
    if(tours.length ===0){
        return(
            <div className='title'>
          <h2>no tours left</h2>
          <button className='btn' onClick={() => fetchData()}>
            refresh
          </button>
        </div>
        )
    }
  return (
    <>
    <Tours tours={tours} removeTour={removeTour} />
    </>
  )
}

export default ToursApp