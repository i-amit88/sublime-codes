var index = 0

function changeColor(){
    var colors=["red" ,"green", "orange"," yellow","purple"];
    document.getElementsByTagName("body")[0].style.backgroundColor=colors[index++];
    if (index > colors.length -1)
        index = 0;
    
}