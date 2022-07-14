import React, { useState } from 'react'

const Tour = ({id, image,name, info, price, removeTour}) => {
    const  [readMore, setReadMore]= useState(false);      //by default it is false as we don't want to render full inf0
    
  return (
    <>
        <article className="single-tour">
      <img src={image} alt={name} />
      <footer>
        <div className="tour-info">
          <h4>{name}</h4>
          <h4 className="tour-price">${price}</h4>
        </div>
        <p>
          {readMore?info: `${info.substring(0,200)}...`}           {/*conditional rendering if readMore is  true show full info i not show part of the info  */} 
          <button onClick={()=>{setReadMore(!readMore)}}>{readMore? 'Show Less':'Read More'}</button>       {/*whatever be the value of readmore we will change it*/}
        </p> 
        <button className="delete-btn" onClick={()=>{removeTour(id)}}>
          Not interested
        </button>
      </footer>
    </article>
    </>
  )
}

export default Tour