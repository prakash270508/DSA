let data =  [];
let currentValue = data.length;
let maxLength = 4;

function push(value) {
    if(currentValue > maxLength){
        console.log("You canot now stack is already full.")
    }else{
        data[currentValue] = value
        currentValue+=1
    }
    console.log(data)
}
function pop(){
    if (currentValue<=0) {
        console.log("ALready empty");
    }else{
        currentValue-=1
    }
}
push(38)
push(18)
push(28)
pop()
pop()
// push(34)
// push(33)
// pop()
// push(23)
// push(56)