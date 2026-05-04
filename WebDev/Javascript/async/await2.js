// async function greet(){
//   throw "404 : Weak connection";
//   return "hello";
// }

// greet()
// .then(()=>{
//   console.log("Promise was resolved");
// })
// .catch((err)=>{
//   console.log("Promise was reject ",err);
// })

function randomNum(){
  return new Promise((resolve , reject)=>{
    setTimeout(()=>{
    let num =  Math.floor(Math.random()*10)+1;
    console.log(num);
    resolve();
  },2000)
  })
}

async function printNum(){
  await randomNum();
  await randomNum();
  await randomNum();
}
printNum();