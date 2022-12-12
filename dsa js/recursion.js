
//DIRECT RECURSION

// function pp(x) {
//     console.log(x);
//     if (x<10){
//         pp(x+1)
//     }
// }
// let data = 10
// pp(data)

// function factorial (item){
//     if(item == 0){
//         return 1 
//     }
//     return item * factorial(item-1)
// }
// console.log(factorial(data));



//INDIRECT RECURSION : - 
let money = 100;
let apples = 0;
let costOfApple = 10;

function buyApple(x) {
    // console.log(x)
    if (x>0) {
        console.log("You have " + x + " Rupees and you purches " + apples + " apples")
        buyMore(x)
    }else{
        console.log('Your money is khatam, go and do some work so that you can earn money and enjoy your life with apples, because an apple daily keeps doctor away.')
    }
}
function buyMore(y){
    apples++
    buyApple(y-costOfApple)
    // console.log("This is buyMore Section", x)
}
buyApple(money)
