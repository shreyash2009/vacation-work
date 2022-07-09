import React from 'react'


 const Notes = () =>{
    return(

        <div className="Notes">
            <div className="note">
                <h3 >Title</h3>
                <br />
                <p>This is content</p>
                <button className='delete'>del</button>
            </div>
        </div>
    )
};

export default Notes;