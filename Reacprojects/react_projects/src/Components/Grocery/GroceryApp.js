import React, { useState } from 'react'
import './Grocery.css'
import List from './List'
import Alert from './Alert'
const GroceryApp = () => {
    const [name,setName]= useState("")
    const [isEditing, setIsEditing] = useState(false);
    const [editID,setEditID] = useState(null);
    const [list,setList] = useState([]);
    const [alert, setAlert] =useState({ show: false, msg: '', type: '' });
    const handleSubmit = (e)=>{
        e.preventDefault();
        if(!name){
            // show alert
            showAlert(true, 'danger', 'please enter value');
        }else if (name && isEditing) {
            setList(
              list.map((item) => {
                if (item.id === editID) {
                  return { ...item, title: name };
                }
                return item;
              })
            );
            setName("");
            setEditID(null);
            setIsEditing(false);
            showAlert(true, 'success', 'value changed');
        }
        else{
            showAlert(true, 'success', 'item added to the list');
            const newItem = {id: new Date().getTime().toString(), title : name}
            setList([...list, newItem]);
            setName("")
        }
    }
    const showAlert = (show = false, type = '', msg = '') => {
        setAlert({ show, type, msg });
      };


      const ClearItems = () =>{
        showAlert(true, 'success', 'Empty List');
        setList([])
      }

      const deleteItem = (id)=>{
        showAlert(true, 'danger', 'item removed');
        const newList = list.filter((item)=>item.id !==id)
        setList(newList)
      }
      const editItem = (id) => {
        const specificItem = list.find((item) => item.id === id);
        setIsEditing(true);
        setEditID(id);
        setName(specificItem.title);
      };

  return (
    <section className='section-center'>
        <form className='grocery-form' onSubmit={handleSubmit}>
            {alert.show && <Alert {...alert} list={list} removeAlert={showAlert}/>}
        <h2>Grocery List</h2>
        <div className='input'>
            <input type="text" className="inputField" placeholder='e.g. tomatos' value={name} onChange={(e)=>{setName(e.target.value)}} />
            <button className='submit-btn' type='submit'>{isEditing ? 'Edit' : 'Submit'}</button>
            {
                list.length > 0 && (
                    <List items={list} ClearItems={ClearItems} deleteItem={deleteItem} editItem={editItem}/>
                )
            }
        </div>
        </form>
    </section>
  )
}

export default GroceryApp