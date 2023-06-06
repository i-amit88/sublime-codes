import React from 'react'
import { Carousel } from "react-responsive-carousel";
import img1 from "../assets/3.jpg"
import img2 from "../assets/4.jpg"
function Services() {
  return (
    <div className='services'>
    <Carousel>
        <div> 
            <img src={img1} alt="item 1" />
            <p>Full Stack</p>
        </div>
        <div> 
            <img src={img2} alt="item 2" />
            <p>peer-to-peer Support</p>
        </div>
    </Carousel>


    </div>
  )
}

export default Services