/*let box = document.querySelector('div');
let btn = document.querySelector('button');
let P = document.querySelector('p');
box.addEventListener("mouseout",function(){
    console.log("Mouse out");
})

 let text = document.querySelector("#text");
 text.addEventListener("keypress" , function(){
    console.log("keypress Was pressed");
 })

window.addEventListener("scroll" , function(){
    console.log("Page was scroll");
});

window.addEventListener('load' , function(){
    console.log("Page loaded");
})*/

/*let btn = document.createElement('button');
let body=document.querySelector('body');
body.append(btn);
btn.innerText = "click me";
document.querySelector("button").addEventListener("click" , function(){
    this.style.backgroundColor = "green";
})*/

let inp = document.createElement("input");
let body = document.querySelector("body");
body.append(inp);

inp.setAttribute("placeholder", "Enter your name");

let h2 = document.createElement("h2");
h2.innerText = "This is H2";
body.appendChild(h2);

inp.addEventListener("input", function () {
    let filtered = inp.value.replace(/[^a-zA-Z ]/g, ""); 
    inp.value = filtered;
    h2.innerText = filtered;
});
