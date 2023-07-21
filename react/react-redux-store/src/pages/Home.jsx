import React from 'react'
import Products from '../Compoments/Products'

function Home() {
  return (
    <div>
        <h2 className="heading">Welcome to Redux Toolkit Store</h2>
        <section>
            <h4>Products</h4>
            <Products />
        </section>
    </div>
  )
}

export default Home