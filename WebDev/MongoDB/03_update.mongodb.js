use('ecommerce')
db.products.updateOne(
    {name : "Wirelesss Mouse"},
    {$set : {price : 899}}
)

db.products.updateMany(
    {category : "Electronics"},
    {$inc : {stock : 11}}
)