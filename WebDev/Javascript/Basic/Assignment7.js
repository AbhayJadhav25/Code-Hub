// const square=(num)=>{
//     return num*num;
// }
// console.log(square(5));

// const square = num => num*num;
// console.log(square(7));

// let id = setInterval( ()=>{
//     console.log("Hello World!");
// },1000)


// setTimeout(()=>{
//     clearInterval(id);
//     console.log("Interval cleared")
// },10000);

//q1    
/*const arrayAverage = (arr)=>{
    let sum=0;
    for(let i=0; i<arr.length ; i++){
        sum+=arr[i];
    }
    return sum / arr.length+1;
    
}
const arr = [1,2,3,4,5,6];
console.log(arrayAverage(arr));

//Q2
const even = (num)=>{
    if(num%2 == 0){
        return "number is even";
    }else{
        return "number is odd"
    }
}
console.log(even());*/

//Q3
/*const object = {
    message: "Hello , World",
    logMessage(){
        console.log(this.message);
    }
};
setTimeout(object.logMessage,1000);*/

//Q4
let length = 4;
function callback(){
    console.log(this.length);
}
const object = {
    length : 5,
    method(callback){
        callback();
    },
};
object.method(callback,1,2)