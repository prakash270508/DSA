let data = [40, 34,87 , 2, 8, 435, 234,233]
for (let i = 0; i < data.length; i++) {
    // console.log(i);
    for (let j = 0; j < data.length; j++) {
        // console.log(j);
        if (data[j]>data[j+1]) {
            let temp = data[j]
            data[j] = data[j+1]
            data[j+1]=temp
        }
        
    }
    
}
console.log(data)

//Default 
data.sort(function(a,b){return a-b})
console.log(data)