/*Q1
let arr = [1,2,3,4,5];
let square = arr.map((nums)=> nums*nums);
let sum = square.reduce((num1 , num2)=>num1+num2);
console.log(sum);
let avg = Math.floor(sum)/square.length;
console.log(avg);*/

/*Q2
let arr = [1,2,3,4,5];
let newArr = arr.map((num)=>num+5);
console.log(newArr);*/

/*Q3
let names = ["mayur","sai","om","adi","abhi"];
let update = names.map((ele)=> ele.toUpperCase());
console.log(update);*/

/*Q4
let doubleAndReturnArgs = (arr,...args)=>
    [...arr , ...args.map((v)=> v*2)];
console.log(doubleAndReturnArgs([1,2,3] , 4,5));
console.log(doubleAndReturnArgs([2] , 10,4));*/

let mergeObjects = (obj1 , obj2)=>({...obj1 , ...obj2});
console.log(mergeObjects({a:1 , b:2},{c:3 , d:4}));


