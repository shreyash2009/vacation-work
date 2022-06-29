import React, {useState} from 'react';
import './Clock.css';


const Clock= ()=>{
    let time  = new Date().toLocaleTimeString();
    const [cTime, uTime] = useState(time);
    const UpdateTime = ()=>{
        time  = new Date().toLocaleTimeString();
        uTime(time);
    };
    setInterval(UpdateTime, 1000);
    return(
        <div className='Container'>
            <h1>{cTime}</h1>
        </div>
    );

};

export default Clock;