

for(let a =0;a<document.querySelectorAll(".drum").length ;a++){
    document.querySelectorAll(".drum")[a].addEventListener("click",function(){
        alert("i got clicked");   //add code for making sound
        console.log(this);   
    });
    
}

document.addEventListener("keypress",function(event){
    alert("key was pressed");
    console.log(event);   // add code for making sound using the event.key
});


// document.querySelector("h1"); this can be replaced with $("h1") as with jquery or jquery("h1")
// $("h1").addClass("heading")