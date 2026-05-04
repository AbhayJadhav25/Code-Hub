#Dupliaction is not allowd , in following we take key "City" two times but it print the last updated element of the City.
Information = {"Name" : "Rahul" , "Age" : 25 ,  "City" :  "Pune" , "Marks" : 88.90  , "City" : "Mumbai"}
print(Information)

print(Information["City"]) #Mumbai
Information["Age"] = 26

print(Information)
print(Information["Age"])