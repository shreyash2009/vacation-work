import React, {useState ,useEffect } from 'react'
import '../node_modules/bootstrap/dist/css/bootstrap.min.css';

const State = () => {
    const [values, setValue] = useState([]);        
    const getCovidData = async ()=>{
        const res = await fetch("https://data.covid19india.org/data.json");
        const data = await res.json();
        setValue(data.statewise);
    }

    useEffect(()=>{
        getCovidData()                                  ////As we want our app to get data as soon as page gets rendered
    },[]);    
    
    
    
  return (
    <>
    <h1 className='mt-5 text-center '>India Covid-19 Statewise data</h1>
    <div className='table-responsive'>
        <table className='table table-hover'>
            <thead className='thead-dark'>
                <tr>
                    <th>State</th>
                    <th>confirmed</th>
                    <th>Recovered</th>
                    <th>Death</th>
                    <th>Active</th>
                </tr>
            </thead>
            <tbody>

                {
                    values.map((currEle, ind)=>{
                        return(
                        <tr key={ind}>
                <td>{currEle.state}</td>
                <td>{currEle.confirmed}</td>
                <td>{currEle.recovered}</td>
                <td>{currEle.deaths}</td>
                <td>{currEle.active}</td>
                </tr>
                    )})
                }
                
            </tbody>
        </table>
    </div>
    </>
  )
}

export default State