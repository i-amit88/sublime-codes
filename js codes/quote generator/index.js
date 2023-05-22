function generate(){
    var quotes={
    "-Abraham Maslow":'"A musician must make music, an artist must paint, a poet must write, if he is to be ultimately at peace with himself. What a man can be, he must be"'
    ,
    "Ally Carter":'"Insane means fewer cameras!"',
    "Nine Inch Nails":'"What have I become? My sweetest friend; everyone I know goes away in the end . And you could have it all my empire of dirt.I will let you down. I will make you hurt."'
}

var authors=Object.keys(quotes);
var author=authors[Math.floor(Math.random()*authors.length)];
var quote = quotes[author];

document.getElementById("quote").innerHTML=quote;
document.getElementById("author").innerHTML=author;

}