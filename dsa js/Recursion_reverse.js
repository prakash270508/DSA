let data = [3, 23, 5, 7]
let temp ;

function reverse(data, start, end){
    if (start<=end) {
        temp = data[start];
        data[start] = data[end]
        data[end]= temp ;
        reverse(data , start+1, end-1)
    }
    return data
}
reverse(data , 0 ,data.length-1)
data = data.toString()
console.log(data);

// DEFALULT FUNCTION
let data2 =[323, 323, 25, 37]
data2.reverse()
console.log(data2)
