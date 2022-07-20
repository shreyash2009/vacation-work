import React, { useState } from 'react'
import './Menu.css'
import MenuCategory from './MenuCategory'
import MenuItems from './MenuItems'
import data from '../media/MenuData'
const allCategories = ["all", ...new Set(data.map((item) => item.category)) ]
const Menu = () => {
    const [categories, setCategories] = useState(allCategories);
    const [items, setItems]= useState(data);

    const filterItems = (category) => {
        if (category === 'all') {
          setItems(data);
          return;
        }
        const newItems = items.filter((item) => item.category === category);
        setItems(newItems);
      };
    
  return (
    <main>
      <section className="menu section">
        <div className="title">
          <h2>our menu</h2>
          <div className="underline"></div>
        </div>
        <MenuCategory categories={categories} filterItems={filterItems} />
        <MenuItems menuItems={items}  />
      </section>
    </main>
  )
}

export default Menu