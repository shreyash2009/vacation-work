import React from 'react';
import {createRoot} from 'react-dom/client'
// import App from './App';
// import Birth from './Components/Birth';
// import ToursApp from './Components/ToursApp';
// import GithubApp from './Components/GithubApp';
// import ReviewsApp from './Components/ReviewsApp';
// import Accordion from './Components/AccordionApp'
// import Menu from './Components/Menu';
// import GroceryApp from './Components/Grocery/GroceryApp';
// import StripeApp from './Components/Stripe/StripeApp';
// import { AppProvider } from './Components/Stripe/Context';
import UnsplashApp from './Components/Unspalsh/UnsplashApp';
const root =document.getElementById('root');

createRoot(root).render(
    <UnsplashApp/>
);