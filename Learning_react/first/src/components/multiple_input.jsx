import React from 'react';
import { useState } from 'react';
import './multiple_input.css';

const MulInput = ()=>{
    let [fullName, setFullName] = useState({
        fName : "",
        lName : ""
    });



    const UpdateInfo = (event)=>{
        const name = event.target.name;
        const value = event.target.value;

        //instead of declaring variable for name and value you can asssign it to an array which containes same name as attributes
        // const {name,, value} = event.target  

        setFullName((preValue)=>{                                   //all the update part in hook passes a argument with the help of that we can access the previous values before updation
            if(name === 'fname'){
                return{
                    fName : value,
                    lName : preValue.lName
                }
            }
            else if (name === 'lname'){
                return{
                    fName : preValue.fName,
                    lName : value
                }
            }
        });
    };
    const onSubmits = (event)=>{
        event.preventDefault();
    };


    return(
        <div className='Container'>
            <form onSubmit={onSubmits}>
                <h1>Good Morning, {fullName.fName} {fullName.lName}</h1>
                <div className='inp'>
            <input type="text" name='fname' placeholder='Enter Your First Name' onChange={UpdateInfo} value={fullName.fName}/>
            <input type="text" name= 'lname' placeholder='Enter Your Last Name' onChange={UpdateInfo} value={fullName.lName} />
            <button type = 'submit' >Show Me </button>
            </div>
            </form >
        </div>
    );


};



export default MulInput;