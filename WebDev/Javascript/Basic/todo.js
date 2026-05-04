let todo=[];
let req = prompt("Enter your request : ");

while(true){
    if(req=="quit"){
        console.log("quitting app");
        break;
    }

    if(req=="list"){
        console.log("----------------");
        for(let i=0 ; i<todo.length;i++){
            console.log((i+1)+" "+todo[i]);
        }
        console.log("----------------");
    }else if(req=="add"){
        let task = prompt("Enter the task you want to add : ");
        todo.push(task);
        console.log("task added");
    }else if(req=="delete"){
        let idx = prompt("Enter a task index : ");
        idx = parseInt(idx);
        todo.splice(idx , 1);
        console.log("Task deleted");
    }else{
        console.log("Enter valid request....try again");
    }
    req = prompt("Enter your request : ");
}