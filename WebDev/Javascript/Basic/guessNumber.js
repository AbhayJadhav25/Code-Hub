let random = Math.floor(Math.random()*100)+1;
let guess;
let attempt = 1;
while(attempt<=10){
    guess = prompt(`${attempt} : Guess the numbber("type "quit" to exit)`);

    if(guess==="quit"){
        alert("You exit from the game");
        break;
    }

    guess = Number(guess);

    if (isNaN(guess)) {
        alert("Please enter a valid number.");
        continue;
    }

    if(random < guess){
        alert("The random number is smaller ");
    }else if(guess < random){
        alert("The Random nunber is greater");
    }else{
        alert(`Congratulations....You guess the right number in ${attempt}`);
        break;
    }
    attempt++;

    if(attempt>10){
        alert(`Sorry....Your attempt is over!! The random number was ${random}`);
    }
    
}