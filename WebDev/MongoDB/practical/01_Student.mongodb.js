use('student');
db.createCollection('Student');
// db.Student.insertMany([
//     {name : "Abhay" , marks:80 , course : "MCA" , age : 21},
//     {name : "Ashutosh" , marks:90 , course : "MCS" , age : 22},
//     {name : "OM" , marks:83 , course : "BCS" , age : 19},
//     {name : "Sai" , marks:85 , course : "DS" , age : 20},
//     {name : "Ram" , marks:92 , course : "IMCA" , age : 23}
// ])

// 1.	Find students having marks greater than 80.
db.Student.find({marks : {$gt : 85}})
// 2.	Find students having marks less than 85.
db.Student.find({marks : {$lt : 85}})
// 3.	Find students belonging to a particular course.
db.Student.find({course : "MCA"})
// 4.	Find students whose age is greater than 20.
db.Student.find({age : {$gt : 20}})
// 5.	Find students whose name is a particular value.
db.Student.find({name : "Ashutosh"})


//Case Study 2 :
// 1.	Update the marks of a particular student.
db.Student.updateOne({name : "Ashutosh"} , {$set : {marks : 70}})
db.Student.find({name : "Ashutosh"})
// 2.	Update the course of a student.
db.Student.updateOne({name : "OM"} , {$set : {course : "BBA(CA)"}})
db.Student.find({name : "OM"})
// 3.	Increase the marks of all students by 5.
// db.Student.updateMany({} ,{$inc : {marks : 5}})
db.Student.find()
// 4.	Delete one student using Roll No.
db.Student.deleteOne({course : "DS"})
// 5.	Delete students having marks less than 30.
db.Student.deleteMany({marks : {$lt : 80}})

db.Student.find()
