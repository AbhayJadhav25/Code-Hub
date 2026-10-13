// 7	Create a database named ShopDB and a collection named Products.
use('ShopDB')
db.createCollection('Products')
// Insert at least 8 product documents containing:
// •	Product ID
// •	Product Name
// •	Category
// •	Price
// •	Quantity

// db.Products.insertMany([
//   { "product_id": 1, "product_name": "Biscuits", "category": "snacks", "price": 20, "qty": 50 },
//   { "product_id": 2, "product_name": "Chips", "category": "snacks", "price": 15, "qty": 100 },
//   { "product_id": 3, "product_name": "Juice", "category": "beverages", "price": 30, "qty": 60 },
//   { "product_id": 4, "product_name": "Soap", "category": "personal care", "price": 25, "qty": 40 },
//   { "product_id": 5, "product_name": "Rice (5kg)", "category": "grocery", "price": 250, "qty": 20 },
//   { "product_id": 6, "product_name": "Notebook", "category": "stationery", "price": 40, "qty": 75 },
//   { "product_id": 7, "product_name": "Shampoo", "category": "personal care", "price": 120, "qty": 30 },
//   { "product_id": 8, "product_name": "Tea Pack", "category": "beverages", "price": 60, "qty": 45 }
// ]
// )
// Perform the following operations:
// 1.	Display all products.
db.Products.find();
// 2.	Find products belonging to a particular category.
db.Products.find({category : "stationery"})
// 3.	Find products with price greater than ₹50.
db.Products.find({price : {$gt : 50}})
// 4.	Sort products according to price.
db.Products.find().sort({price : 1})
// 5.	Display the 3 most expensive products.
db.Products.find().sort({price:-1}).limit(3)
// 6.	Update the price of a product.
db.Products.update({product_name:'Tea Pack'} , {$set : {price : 80}})
// 7.	Delete a product.
db.Products.deleteOne({category:'grocery'})

db.Products.find()