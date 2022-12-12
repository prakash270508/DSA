let arry = [2, 3, 4, 5, 6, 86, 54]
let position = 2;
let newElement= 7

for (let i = arry.length- 1; i >= 0; i--) {
    // console.log(i)
    if (i>=position) {
        arry[i+1]=arry[i] 
        if (i=== position) {
            arry[i]= newElement;
        }
    }
}
console.log(arry)

// function insertElement() {
//     let arry = [2, 3, 4, 5, 6, 86, 54, 43, 23];
//     let position = document.getElementById("position").value;
//     let newElement = document.getElementById("newElement").value;
    
//     for (let i = arry.length - 1; i >= 0; i--) {
//         // console.log(i)
//         if (i >= position) {
//             arry[i + 1] = arry[i]
//             if (i === position) {
//                 arry[i]=newElement; 
//             }
//         }
//     }
//     console.log(arry)
// }