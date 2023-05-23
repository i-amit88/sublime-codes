const groceries = document.getElementsByClassName("groceries")[0];
const  pencil = document.getElementById("pencil");
const allitems = document.getElementsByClassName("allitems")[0];
const userInput= document.getElementsByClassName("user-input")[0];

pencil.addEventListener("click", function(){
    allitems.innerHTML="";

});

userInput.addEventListener("keydown",function(event){
    if(event.key== "Enter"){
        additem();
        // console.log(event);
    }
})

function additem(){
    var h2 = document.createElement("h2");
    h2.innerHTML = "- " + userInput.value;

    h2.addEventListener("click" , function(){
        h2.style.textDecoration = "line-through";
    })

    allitems.insertAdjacentElement("beforeend",h2);

    userInput.value="";
}



