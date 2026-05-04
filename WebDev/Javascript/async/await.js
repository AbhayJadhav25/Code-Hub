async function greet(){
    console.log("Hello world");
}
greet().
then((res)=>{
    console.log("Function data : ",res);
})
.catch((err){
    console.log("Error was : ",err);
});