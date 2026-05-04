//Q1
/*let arr = [1,2,3,4,5,6,2,3];
let num = 2;
for(let i=0 ; i<arr.length;i++){
    if(arr[i]==num){
        arr.splice(i,1);
    }
}
// console.log(arr);
for(val of arr){
    console.log(val);
}*/

//Q2
let number = 287152 ;
let count =0;
// let copy = number;
while(number > 0){
    count++;
    number = Math.floor(number/10);
}
console.log("Total digi : "+count);

/*let arr = [1,2,3,4,5,6];
let count=0;
while(arr[count]!=undefined){
    count++;
}
console.log(count);*/

//Q3
/*let number = 287152;
let sum=0;
while(number>0){
    let num = number%10;
    sum+=num;
    number=Math.floor(number/10); 
}
console.log(sum);*/

//Q4
/*let num = 7;
let fact=1;
for(let i=num ; i>=1 ;i--){
    fact*=i;
}
console.log(fact);*/

//5
// let arr=[12,23,76,11,9];
// let largest = arr[0];
/*for(let i=1;i<arr.length;i++){
    if(arr[i]>largest){
        largest = arr[i];
    }
}
largest=0;
for(let i=0 ; i<arr.length ; i++){
    if(largest < arr[i]){
        largest = arr[i];
    }
}

console.log(largest);*/