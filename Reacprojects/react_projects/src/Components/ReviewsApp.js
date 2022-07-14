import React, { useState } from 'react'
import { FaChevronLeft, FaChevronRight} from 'react-icons/fa';
import './Reviews.css'
import  data from '../media/ReviewsData'
const ReviewsApp = () => {
  const [ind, setInd] = useState(0);
  const {image, name, job, text} = data[ind];
  const checkNumber = (number) => {
    if (number > data.length - 1) {
      return 0;
    }
    if (number < 0) {
      return data.length - 1;
    }
    return number;
  };
  const nextReview = ()=>{
    setInd((ind)=>{
      const newInd = ind+1;
      return checkNumber(newInd);
    })
  }

  const prevReview = ()=>{
    setInd((ind)=>{
      return checkNumber(ind-1);
    })
  }

  const randomReview = ()=>{
    let rand = Math.floor(Math.random()*data.length);
    setInd((pre)=>{
      if(rand === pre){
        rand= rand + 1;
        pre= rand;
        return pre;
      }
      return rand;
    })
  }

  return (
    <section>
        <h1>Our Reviews</h1>
    <div className='Container'>
        <div className='image'>
            <img src={image} alt="avatar"/>
        </div>
        <div className='info'>
            <h4>{name}</h4>
            <p>{job}</p>
            <p>{text}</p>
            <span><FaChevronLeft  onClick={prevReview }/></span><span><FaChevronRight onClick={nextReview}/></span>
            <button style={{display:"block"}} onClick={randomReview}>Surprise me</button>
        </div>
    </div>
    </section>
  )
}

export default ReviewsApp