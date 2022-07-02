import React from "react";



const ToDoList = (props) => {
    const DeleteItem =()=>{
        console.log("clicked");
    }
  return (
    <div className="Item-content">
   <i className="fa-regular fa-trash-can" onClick={DeleteItem}></i>
      <li>{props.text}</li>
      <i class="fa-solid fa-pen"></i>

    </div>
  );
};

export default ToDoList;
