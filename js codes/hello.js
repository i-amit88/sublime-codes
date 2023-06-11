// function add(a , b , c){
//     return a + b + c
// }

// let c =add(10, 20 , 30);
// console.log(c)

// // 7 primirtive data types are ss nn bb u
// //Symbol, string ,number, null, byte, boolean ,undefined;

// // like dictionary in pyton
// //objects in js

// const items =
// {
//     "harry": 65 , 
//     "rohan": "hello",
//     "yoi" : undefined
// }
// console.log(items["ryoi"])
// items1 =
// {
//     "harry": 65 , 
//     "rohan": "hello",
//     "yoi" : undefined
// }
// console.log(items1.harry)

// // string concatinate

// let a = "amit"
// let b = 6   
// console.log(a + b)

// // let z= prompt("enter age") //promts input , it will be string 
// // z = Number.parseInt(z) // sting will be converted to integer
// // alert("hello")

// console.log("hello me")

// 345
// const hello = () => {
//     console.log("heloo")
// }  

// hello()

// const sum = (p , q) => {
//     return p + q
// }

// console.log(sum( 1 , 2))
// let boy1 = "nikhil"
// let boy2 = "parmod"
// console.log(`${boy1} is  a friend of ${boy2}`)

// let fruit = 'bana\'na' // \' are the escape characters  \n \r
// console.log(fruit)

// function x(){
//     for (let i = 1 ; i <= 5 ; i++){
//         setTimeout(function (){
//             console.log(i)
//         },i * 1000)
//     }
//     console.log("NAMASTE JAVASCRIPT")
// }
// x();



// function x(y){
//     console.log("y")
//     y();
// }

// x(function y(){
//     console.log("x")
// })


// let cart = ["shoes" , "pants", "shirts"];

// const promise = createOrder(cart);

// promise.then(function(orderId){
//   console.log(orderId);
//   // proceedtopayment(orderId);
// });


// function createOrder(cart){
//   const pr = new Promise(function (resolve,reject) {
//       if(!validateCart(cart)){
//         const err = new Error("cart is not valid");
//         reject(err);
        
//       }
//     const orderId= "123456";
//     if(orderId){
//       resolve(orderId);
//     }

//     return pr;
//   });
// }

// function validateCart(cart){
//   return true;
// }
 // get method ...............................................................>

const url = 'https://jsonplaceholder.typicode.com/users'

const myaxios = (method , url , body = null) => {
  return fetch(url)
  .then((res) =>{
    return res.json();
  });
}

myaxios('GET',url).then((res) => {
  console.log(res);
  // console.log(res[0].name);

}).catch((err) =>{
  console.log(err)
})
 


//  post  method
// const url = 'https://jsonplaceholder.typicode.com/users'

// const myaxios = (method , url , body = null) => {

//   const headers = {
//     'Content-Type':'application/json',
//   }

//   return fetch(url,{
//     method:method,      // will get from  function that it is get or post
//     headers:headers,
//     body:JSON.stringify(body) 
//   }).then((res) =>{
//     return res.json();
//   });
// }
// myaxios('POST',url,{name:'rakesh',job:'software developer'}).then((res) => {
//   console.log(res);

// }).catch((err) =>{
//   console.log(err)
// })
