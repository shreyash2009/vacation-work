import React, { useState } from 'react';
import './Counter.css';

function Counter() {
  const [count, updateCount] = useState(0);         // count is current value updateCount is updated value which will be 
  //replicate in count and usesate we pass the initial state
  // Note always write state part inside the component u r woorking on
  const IncNum = ()=>{
    updateCount(count + 1);
  };
  
  //state part for decrement
  const DecNum = ()=>{
    updateCount(count - 1);
  };
  
  //state part for reset
  const ResNum = ()=>{
    updateCount(0);
  };
  

  //change color part 

  const initialBg = "white";
  const [bg, updateBg] = useState(initialBg);
  let pBg = "green";
  let nBg = "#FF0000";

  const SetColor = ()=>{
    if(count > 0){
      updateBg(pBg);
    }
    else if(count<0){
      updateBg(nBg);
    }
    else{
      updateBg(initialBg);
    }
  };
  

  return (
   <div  className='Container'>
    <h1 style = {{ color : bg}} onChange={SetColor}>{count}</h1>
    <div className='btns'>
    <button onClick={IncNum} >Increment</button>
    <button onClick={DecNum}>Decrement</button>
    <button onClick={ResNum}>Reset</button>
    </div>
   </div>
  );
}

export default Counter;
