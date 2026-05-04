// let arr = [1,2,3,4,5]
// arr.forEach((num)=>{
//     console.log(num)
// })

/*let arr = [
{
    name:"Abhay",
    marks:23
},
{
    name:"sai",
    marks:23
},
{
    name:"om",
    marks:23
}];

arr.forEach((stud)=>{
    console.log(stud.marks)
})


let cgpa = arr.map((ele)=>{
    return ele.marks / 10;
})
console.log(cgpa);*/

// let arr = [12, 15 , 9 , 7 , 8];
// let double = arr.map((num)=>{
//     return num*2;
// })
// console.log(double)

// let nums = [2,4,1,5,6,2,,8,9];
// let even = nums.filter((num)=>(num%2==0));
// console.log(even);

/*console.log([1,2,3,4].every((ele)=>(ele%2==0))); // false
console.log([1,2,3,4].some((ele)=>(ele%2==0))); //true

let func = [1,2,3,4].reduce((accumlator , ele)=>{
    return accumlator+ele;
}) 
console.log(func)

let arr = [12 , 7 , 4 , 9 , 14 , 21];
let res = arr.reduce((max , ele)=>{
    if(max<ele){
        return ele;
    }else{
        return max;
    }
})
console.log(res);

let arr = [10 , 20,45,90,34];
let ans = arr.every((num)=>num%10);
if(ans){
    console.log("Yes");
}else{
    console.log("No")
}
console.log(ans);

let arr = [12 , 7,4,9,14,21];
let ans = arr.reduce((ans,ele)=>{
    if(ele<ans){
        return ele;
    }else{
        return ans;
    }
})
console.log(ans);

function sum(a=9 , b=7){
    return a+b;
}
console.log(sum());

let arr=[1,2,3,4,5,6,7];
console.log(...arr);
let Min = Math.min(...arr);
let Max = Math.max(...arr);
console.log(Min);
console.log(Max);

let arr = [1,2,3,4,5];
let newArr = [...arr];

let word = [..."HelloWord"];
let newWord = [...word];
console.log(newWord);
console.log(newArr);

let even = [2,4,6,8];
let odd = [1,3,5,7,9];
let nums = [...even , ...odd];
console.log(nums)

let data = {
    email : "abc123@gmail.com",
    password : "123abc"
}
let dataCopy = {...data , id:123 , age:19}
console.log(dataCopy)*/
function sum(){
    return args.reduce((res  , sum)=>res+sum);
}
console.log(sum(1,2,3,4,5,6,7));