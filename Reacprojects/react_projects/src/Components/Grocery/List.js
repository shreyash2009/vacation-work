import React from 'react'

const List = ({items,ClearItems,deleteItem,editItem}) => {
    
  return (
    <div className='grocery-item'>
        {
            items.map((item)=>{
                const {id, title} = item;
                return(
                    <article key={id}>
                        <p className='title'>{title}</p>
                        <div className='btn-container'>
                        <button onClick={()=>{
                            deleteItem(id)
                        }}>x</button>
                        <button onClick={()=>{
                            editItem(id)
                        }}>pen</button>
                        </div>
                    </article>
                )
            })
        }
        <button onClick={ClearItems}>Clear Item</button>
    </div>
  )
}

export default List