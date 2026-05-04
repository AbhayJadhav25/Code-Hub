/*function printPoem(){
    console.log("Twinkle, twinkle, little star,\nHow I wonder what you are\nUp above the world so high,\nLike a diamond in the sky.")
}
printPoem();*/

/*function dice(){
    let num = Math.floor(Math.random()*6)+1;
    console.log(num);
}
dice();*/

/*function average(a, b,c){
    let avg = (a+b+c)/3;
    console.log("Average : "+avg);
}
average(12,13,14);
average(61,62,63);*/

/*function table(num){
    for(let i=1 ; i<=10 ; i++){
        console.log(i*num);
    }
}
table(7);*/

/*function sumOfN(num){
    let sum = 0;
    for(let i=1;i<=num ; i++){
        sum+=i;
    }
    return sum;
}
console.log(`Sum : ${sumOfN(10)}`);*/

/*let str=["Hii","adya","Dukkarya"];
function concat(str){
    let res = "";
    for(let i=0 ; i< str.length ;i++){
        res+=str[i];
    }
    return res;
}
concat(str);*/

/*function outer(){
    let a =9;
    function inner(){
        let b=8;
        console.log(a);
    }
    inner();
    // console.log(b) gives error
}
outer();*/

//Funtion Expression

// let hello = function(){
//     console.log("Hello");
// }
// hello();


// function multipleGreet(func , count){
//     for(let i=1 ;i<=count ;i++){
//         func();
//     }
// }
// function greet(name){
//     console.log("Hello "+name);
// }
// multipleGreet(()=>greet("Abhay"),9);

const calculator = {
    add : function(a , b){
        return a+b;
    },
    sub : function(a,b){
        return a-b;
    },
    mul:function(a,b){
        return a*b;
    }
}
console.log(calculator.add(3,3));
