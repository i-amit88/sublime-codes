import React from 'react'
import { toast } from 'react-hot-toast';

const img1 =
  "https://www.reliancedigital.in/medias/Apple-MGN63HNA-Laptops-491946461-i-1-1200Wx1200H?context=bWFzdGVyfGltYWdlc3wxNzczNDJ8aW1hZ2UvanBlZ3xpbWFnZXMvaDVhL2gyZC85NDQzMDgzNTgzNTE4LmpwZ3xhYzRiNWIxZGQ2NjNiNWIyYjI0Y2ZkYTZlZWQ3MTFjZTMxYzVmNDBiNmM5Mzk5OTM2OGVkZmExMjMyYjIxNDQ4";
const img2 =
  "https://cdn.shopify.com/s/files/1/2428/5565/products/Neemans-HaleBlack-ReLive-Knits-Jogger-FrontRightLogo-Comfortable-Shoes_1024x.jpg?v=1662876260";


function Home() {

    const productList =[
        {
            name:"Mac book",
            price:12000,
            imgSrc:img1,
            id:"kasduigfaidug",
        },
        {
            name:"Shoes",
            price:1000,
            imgSrc:img2,
            id:"kaigfaidug",
        },
    ]

        const addToCart  = (options)=>{
            console.log(options);
            toast.success("Added to cart");
        }


  return (
    <div className='home'>{
        productList.map((i)=>(
            <ProductCart  key={i.id} imgSrc={i.imgSrc} name={i.name} 
            price={i.price} id={i.id} handler={addToCart} />
        ))
    }</div>
  )
};

const ProductCart = ({name,id,price,handler,imgSrc})=>(  //parenthesis means it will return directly
<div className='productCard'>
    <img src={imgSrc} alt={name} />
    <p>{name}</p>
    <h4>${price}</h4>
    <button onClick={()=>handler({name,price,id,quantity:1,imgSrc})}>Add to Cart</button>
</div>
);

export default Home;