function paisa(n) {

    let note = prompt("Note")
    let remain = 0;
    let require100 = 0;
    let require50 = 0;
    let require20 = 0;

    // require100 = Math.floor(n / 100)
    // remain = remain + (n % 100)

    switch (note) {
        case  100:
            
            break;
        case 50:
            
            break;
        case 20:
            
            break;

        default:console.log("Kuch nhi mil rha bhai");
            break;
    }

    console.log(`The amount of 100 rupess note is ${require100}`)
    console.log(`The amount of 50 rupess note is ${require50}`)
    console.log(`The amount of 20 rupess note is ${require20}`)
    console.log(n);
    console.log(remain)
}
paisa(1370);