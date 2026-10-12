const express = require('express')
const cors = require('cors')
const app = express()

app.use(cors())

app.get("/student",(req,res)=>{
    res.json(require("./student.json"))
});

app.listen(3000 , ()=>{
    console.log("API running at http://localhost:3000")
});