const flashcards = document.getElementsByClassName("flashcards")[0];
const createBox = document.getElementsByClassName("create-box")[0];
const question = document.getElementById("question");
const answer = document.getElementById("answer");
let contentArray = localStorage.getItem('item')?JSON.parse(localStorage.getItem('item')):[];

contentArray.forEach(divMaker());

function divMaker(text){
    var div = document.createElement("div");
    var question = document.createElement("h2");
    var answer = document.createElement("h2");

    div.className="flashcard";
    question.setAttribute("style","border-top:1px solid red; padding : 15px; margin-top:30px");
    question.innerHTML= text.my_question;
    
    answer.setAttribute("style","text-align:center; display:none; color:red");
    answer.innerHTML= text.my_answer;

    div.appendChild(question);
    div.appendChild(answer);

    div.addEventListener('click',function(){
        if(answer.style.display == "none"){
            answer.style.display="block"
        }else{
            answer.style.display = "none";
        }
    });

    flashcards.appendChild(div);
}




function addFlashcard(){
    var flashcard_info = {
        'my_question' : question.value,
        'my_answer' : answer.value

    }
    contentArray.push(flashcard_info);
    localStorage.setItem('items',JSON.stringify(contentArray));  //it is overriding the info
    divMaker(contentArray[contentArray.length -1]);
    question.value='';
    answer.value='';

}


function createcard(){
    createBox.style.display="block";
}

function hideFlashcard(){
    createBox.style.display="none";
}


function deletecard(){
    localStorage.clear();
    flashcards.innerHTML='';
    contentArray=[];
}