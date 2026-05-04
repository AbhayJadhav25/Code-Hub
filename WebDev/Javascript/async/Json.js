let data = '{"fact":"The oldest cat to give birth was Kitty who, at the age of 30, gave birth to two kittens. During her life, she gave birth to 218 kittens.","length":136}'

let resData = JSON.parse(data);
console.log(resData);

let stud = {
  name : "Abhay",
  age: 21,
  marks : 99,
}

let jsonData = JSON.stringify(stud);
console.log(jsonData);

//https://catfact.ninja/fact