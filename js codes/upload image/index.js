const image_input = document.querySelector("#image-input");

var upload_image = " ";

image_input.addEventListener("change",function(){
    const reader = new FileReader(); // every time button is clicked new array is made
    reader.readAsDataURL(image_input.files[0]);  //first file is selected 

    reader.addEventListener("load" , () => {   //after file is loaded this will occur
        upload_image = reader.result;   // here file is read so we can assign th e result
        document.querySelector("#display-image").style.backgroundImage = `url(${upload_image})`
        
    })
})