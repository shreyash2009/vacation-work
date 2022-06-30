import React, {useState} from 'react';
import './events.css';


const Event = ()=>{
    const [fName, setFName] = useState();
    const [lName, setLName] = useState();

    const [fullName, setFull] = useState();
    const UpdateName = (event)=>{
        // const [name, value] = event.target;
        if(event.target.name === 'fname'){                                //here we are getting the element in which we are making changes
            setFName(event.target.value);

        }else{
            setLName(event.target.value);

        } 
    };
    
    const onSubmit = (event)=>{
        event.preventDefault();
        setFull(fName + " " + lName);
    }
    return(
        <div className='Container'>
            <h1>Hello, {fullName}</h1>
            <div className='inp'>
            <input type="text" name='fname' placeholder='Enter Your First Name' onChange={UpdateName} value={fName}/>
            <input type="text" name= 'lname' placeholder='Enter Your Last Name' onChange={UpdateName} value={lName} />

            <button onClick={onSubmit}>Show Me </button>
            </div>
        </div>
    );

};

export default Event;
