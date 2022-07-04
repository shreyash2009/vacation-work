import React from "react";



const ToDoList = (props) => {
  
    
  return (
    <div className="Item-content">
   <i className="fa-regular fa-trash-can" onClick={()=>{
    props.onSelect(props.id);
   }}>

   </i>
      <li>{props.text}</li>
      <i class="fa-solid fa-pen"></i>

    </div>
  );
};

export default ToDoList;
