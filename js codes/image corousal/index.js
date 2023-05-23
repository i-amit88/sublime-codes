var index=0;
show_image(index);

function show_image(i){
    index+=i;

    var images = document.getElementsByClassName("image");
    // images is created as array
    console.log(images.length);
    
    var dots = document.getElementsByClassName("dot");

    for(var i=0; i<images.length; i++){
        images[i].style.display = "none";
    }

    // for(var i=0; i<dots.length-1; i++){
    //     dots[i].className=dots.className.replace("active","");
    // }

    if(index > images.length-1)
        index = 0;

    if(index < 0)
        index= images.length-1;

    images[index].style.display = "block";
    // dots[index].className += "active";
}