//Q1
let btn = document.createElement('button');
let input = document.createElement('input');
btn.innerText = "Click me";
let body = document.querySelector("body");

body.append(input);
body.append(btn);

//Q2
btn.setAttribute("id" , "btn");
input.setAttribute("placeholder","username");

//Q3
let button = document.querySelector("#btn")
button.style.backgroundColor = "blue";
button.style.color = "white";

//Q4
let h1 = document.createElement('h1');
h1.innerHTML = "<u>DOM practice</u>";
h1.style.color ="purple";
body.append(h1);

//Q5
let p = document.createElement('p');
p.innerHTML = "Apna College <b>Delta</b> Practice";
body.append(p);