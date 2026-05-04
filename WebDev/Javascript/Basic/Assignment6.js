//Q1
/*let arr = [12, 65 , 78 , 41 , 101];
let num = 30;
function greater(arr , num){
    for(let i=0 ; i<arr.length;i++){
    if(arr[i]>num){
        console.log(arr[i]+" "); 
    }
}
}
greater(arr,num);*/

//Q2
/*let str = "abcdefgghiijk";
function unique(str){
    let ans = ""
    for(let i=0 ; i<str.length ; i++){
        let currChar = str[i];
        if(ans.indexOf(currChar)== -1){
            ans += currChar;
        } 
    }
    return ans;
}
console.log(unique(str));*/

//Q3
/*let country = ["Australia","Germany","United States of America"];
function large(country){
    let large = country[0];
    for(let i=1 ; i<country.length;i++){
        if(country[i].length> large.length){
            large = country[i];
        }
    }
    return large;
}
console.log(large(country));*/

//Q4
/*let str = "Abhcediouna";
function vowels(str){
    let vowels =0;
    str = str.toLowerCase();
    for(let i=0 ; i<str.length;i++){
        let ch = str[i];
        if(ch=='a'||ch=='e'||ch=='o'||ch=='i'||ch=='u'){
            vowels++;
        }
    }
    return vowels;
}
console.log(`Vowels : ${vowels(str)}`);*/

//Q5
function random(start , end){
    let diff = end - start;
    let num = Math.floor(Math.random()*diff)+start;
    return num;
}
console.log(random(20 , 25));