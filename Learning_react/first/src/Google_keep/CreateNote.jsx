import React from 'react'
import { useState } from 'react';


const CreateNote = (props) =>{
    const [note, setNote] = useState({
        title : "",
        content: ""
    });
    const handleChange = (event) =>{
        const {name, value} = event.target;
            setNote((prevData)=>{
                return{
                    ...prevData,
                    [name] : value,
                };
            });
    
    };

    const AddEvent  = (note) =>{
        props.passNote(note);
    }
    
    
    return (
    <div className="create-note">
        <form onSubmit={AddEvent
        }>
        <input type="text" id='title' placeholder='Title'  name="title" onChange={handleChange} value={note.title}/>
        <textarea   cols="" rows=""  name="content" placeholder='Write Note Here...'   onChange={handleChange} value={note.content}></textarea>
        <button type='submit'>+</button>
        </form>
    </div>
    )

};

export default CreateNote;