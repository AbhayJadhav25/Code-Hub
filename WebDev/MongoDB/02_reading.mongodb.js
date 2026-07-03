use('ecommerce');
// db.products.find({"category" : "Electronics"})
// db.products.find({"name" : "Wireless Mouse"})

// db.products.find({price : { $lt : 1000}})
// db.products.find({price : {$gte : 1000 , $lte : 5000}})

// db.products.find({
//     $or : [
//         {category : "Electronics"},
//         {stock : {$lt : 50}}
//     ]
// })

// db.products.find({} , {name : 1 , price : 1 , _id : 0})

db.products.find().sort({price : -1}).limit(2)
db.products.find().sort({price : 1}).skip(1).limit(2)