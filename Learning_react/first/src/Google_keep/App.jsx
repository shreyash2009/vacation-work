import React from 'react'

import './App.css'
import Header from './header';
import CreateNote from './CreateNote';
import  Notes from './Notes';
// import { useState } from 'react';
const App = () =>{

    // const [item, addItem] = useState([]);

    const AddNote=(note)=>{
        alert("hello");
        console.log(note);
    }
    return (
        <>
        <Header></Header>
        <CreateNote passNote={AddNote}></CreateNote>

        <Notes></Notes>
        </>
    )   
}

export default App;