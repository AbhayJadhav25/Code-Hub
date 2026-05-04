let para = document.createElement('p');
para.innerText = "Hey I'm red"
// para.style.color = "red";
para.classList.add("red");
let body = document.querySelector('body');
body.append(para);

let head3 = document.createElement('h3');
head3.innerText = "i'm a blue h3!"
head3.style.color = "blue";
body.append(head3);

let div = document.createElement('div');
div.classList.add("box");
body.append(div);

let h1 = document.createElement('h1');
h1.innerText = " I'm a div";
div.appendChild(h1);

let p = document.createElement('p');
p.innerText = "ME TOO!";
div.appendChild(p);