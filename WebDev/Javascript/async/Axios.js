let url = "https://catfact.ninja/fact";
// async function getFact(){
//   try{
//     let res = await axios.get(url);
//     return res.data.fact
//   }catch(e){
//     return "No fact";
//   }
// }


// let btn = document.querySelector("button");
// let para = document.querySelector("#fact");
// btn.addEventListener("click",async ()=>{
//   let res  = await getFact();
//   para.textContent = res;
// })

// let url2 = "https://dog.ceo/api/breeds/image/random";
// let btn = document.querySelector("button");
// let img = document.querySelector("#pic");
// async function getImg(){
//   try{
//     let img = await axios.get(url2);
//     return img.data.message;
//   }catch(e){
//     console.log("Image not found");
//   }
// }

// btn.addEventListener("click",async ()=>{
//   let res = await getImg();
//   img.setAttribute("src" , res);
// })

async function getFact(){
  try{
    const config = {headers : {Accept: "text/html"}};
    let res = await axios.get(url , config);
    console.log(res.data);
  }catch(err){
    console.log(err);
  }
}
getFact();