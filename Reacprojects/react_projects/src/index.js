import React from 'react';
import {createRoot} from 'react-dom/client'
// import App from './App';
// import Birth from './Components/Birth';
// import ToursApp from './Components/ToursApp';
import GithubApp from './Components/GithubApp';
// import ReviewsApp from './Components/ReviewsApp';
// import Accordion from './Components/AccordionApp'


const root =document.getElementById('root');

createRoot(root).render(<GithubApp/>);