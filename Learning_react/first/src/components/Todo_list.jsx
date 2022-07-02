import React, { useState } from "react";
import "./Todo.css";
import ToDoList from "./ToDoList";

const Todo = () => {
  const [itemName, setItem] = useState(""); //Hook for input field
  const [itemList, setItemList] = useState([]); //here we are storing each item in an array
  const InputItem = (event) => {
    setItem(event.target.value);
  };

  //function for add button
  const AddItem = () => {
    setItemList((oldItems) => {
      //updation part of hooks returns the previous data we can access that
      return [...oldItems, itemName]; //we used spread operator here to simply do updation in previous array
    });
    //when you are adding item it getting added but the item is still in the input field for making that clear
    setItem("");
  };

  return (
    <div className="Container">
      <h1>ToDo List </h1>
      <div className="inputPart">
        <input
          type="text"
          placeholder="Enter Item..."
          onChange={InputItem}
          value={itemName}
        />
        <button onClick={AddItem}>+</button>
      </div>
      <div className="showItems">
        <ol>
          {/* note:- when writing js in jsx component write before return or write in curly braces*/}
          {/*  <li>{itemName}</li>  */}
          {itemList.map((currVal) => {
            //map function  returns an array, here we are using it for traversing array of items
            return <ToDoList text = {currVal}/>;
          })}
        </ol>
      </div>
    </div>
  );
};

export default Todo;
