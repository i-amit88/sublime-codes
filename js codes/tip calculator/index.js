const amount = document.getElementById("amount");
const guest = document.getElementById("guest");
const quality = document.getElementById("quality");
const tipAmount = document.getElementById("tip-amount");

function  calculate(){
    const tip = ((amount.value * quality.value)/(guest.value)).toFixed(2);

    amount.value= "";
    guest.value= "";
    quality.value= "";

    if(tip == 'NaN'){
        tipAmount.innerHTML = "tip $0 each";
        showTipAmount();
    }else{
        tipAmount.innerHTML = 'tip $' + tip + 'each';
        showTipAmount();
    }

}

function showTipAmount(){
    var x = tipAmount;
    x.className = 'show';
    setTimeout(function (){x.className = x.className.replace('show','');},3000);
}
