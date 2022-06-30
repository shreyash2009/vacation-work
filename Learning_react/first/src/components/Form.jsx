import React, {useState} from 'react';
import './Form.css';


const Form = ()=>{
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
    
    const onSubmits = (event)=>{
        event.preventDefault();
        setFull(fName + " " + lName);
    }
    return(
        <div className='Container'>
            <form onSubmit={onSubmits}>
            <h1>Hello, {fullName}</h1>
            <div className='inp'>
            <input type="text" name='fname' placeholder='Enter Your First Name' onChange={UpdateName} value={fName}/>
            <input type="text" name= 'lname' placeholder='Enter Your Last Name' onChange={UpdateName} value={lName} />

            <button type = 'submit' >Show Me </button>
            </div>
            </form>
        </div>
    );

};

export default Form;
