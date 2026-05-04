let btn = document.querySelector('button');
let inp = document.querySelector("input");
let ul = document.querySelector("ul");

btn.addEventListener('click', function(){
    let lis = document.createElement('li');
    ul.append(lis);
    lis.innerText = inp.value;
    let del = document.createElement('button');
    del.innerText = "Delete";
    lis.appendChild(del);
    inp.value="";
});

ul.addEventListener('click' , function(e){
    if(e.target.nodeName == "BUTTON"){
        let item = event.target.parentElement;
        item.remove();
    }
})