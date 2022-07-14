import React, {useState}from 'react'
import { AiOutlineMinus, AiOutlinePlus } from 'react-icons/ai';
const AccordionQue = ({id,title, info}) => {
    const [showInfo, setShowInfo] = useState(false);
    const handleSwitch = () =>{
        setShowInfo(!showInfo);
    }
  return (
    <article>
        <header><h2 >{id}. {title}</h2>
        <button onClick={handleSwitch}>{showInfo ? <AiOutlineMinus/>:<AiOutlinePlus/>}</button></header>
        {showInfo && <p>{info}</p>}
    </article>
  )
}

export default AccordionQue