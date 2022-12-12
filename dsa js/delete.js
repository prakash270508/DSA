let data1 = [ 5, 2, 7 ,8, 12, 55, 70];
data1 = data1.sort(function(a, b){return a-b})
let data2 = [3, 4, 11,28, 10, 54]
data2 = data2.sort(function(a, b){return a-b})
let data3 = [];
let d1 = 0;
let d2 = 0;
let d3 = 0;

while (d1 < data1.length && d2<data2.length) {
    if (data1[d1]<data2[d2]) {
        data3[d3]=data1[d1]
        d1++
    }else{
        data3[d3]=data2[d2]
        d2++
    }
    d3++
}
while (d1<data1.length) {
    data3[d3] = data1[d1]
    d1++
    d3++
}
console.log(data3);







// let data1 = [4, 6, 7, 8, 55, 67]
// data1 = data1.sort(function (a, b) { return a - b })
// console.log(data1)
// let data2 = [5, 9, 22, 34];
// data2 = data2.sort(function (c, d) { return c - d })
// console.log(data2)
// let data3 = [];
// let d1 = 0;
// let d2 = 0;
// let d3 = 0;


// while (d1 <= data1.length && d2 <= data2.length) {
//     if (data1[d1] < data2[d2]) {
//         data3[d3] = data1[d1];
//         d3++;
//     } else {
//         data3[d3] = data1[d2]
//         d2++;
//     }
//     d3++
// }
// console.log(data3)