//Q1
/*let num = prompt("Enter any number : ")
num = parseInt(num);
if(num%10==0){
    console.log("Good");
}else{
    console.log("Bad");
}*/

// Q2
/*let name = prompt("Enter your name : ");
let age = prompt("Enter your age : ")
alert(`${name} is ${age} years old`);*/

/*Q3
let month = prompt("Enter Quarter Number : ");
month = parseInt(month);
switch(month){
    case 1 : 
        console.log("Janurary , Feburary , March");
        break;
    case 2 : 
        console.log("April , May , June");
        break;
    case 3: 
        console.log("July , Augest , September");
        break;
        
    case 4 : 
        console.log("October , November , December");
        break;
    
    default : console.log("Enter Valid Quarter Number.....!") 
}*/

/*Q4
let str = prompt("Enter any string : ")
if((str[0]=="A" || str[0]=="a" )&& str.length>5){
    console.log("Golden String")
}else{
    console.log("Not a golden string");
}*/

/*Q5
let a = prompt("Enter First Number : ");
let b = prompt("Enter second Number : ");
let c = prompt("Enter Third Number : ");

if(a>=b && a>=c){
console.log(`${a} is Greater`);
}else if(b>a && b>=c){
console.log(`${b} is Greater`);
}else{
    console.log(`${c} is greater`)
}

if(a>b){
    if(a>c){
        console.log(`${a} is greatest`)
    }else{
        console.log(`${c} is greatest`);
        
    }
}else{
    if(b>c){
        console.log(`${b} is greatest`);
    }else{
        console.log(`${c} is greatest`);
        
    }
}

let max = a;
if(max<b)
max = b;

if(max<c)
max=c

console.log(`${max} is largest`);*/

let num1 = prompt("Enter first number : ");
let num2 = prompt("Enter second number : ");
if(num1[num1.length-1]==2 && num2[num2.length-1]==2){
    console.log(`${num1} and ${num2} have the same last digit 2`);    
}else{
    console.log(`${num1} and ${num2} does not have same last digit 2`); 
}


