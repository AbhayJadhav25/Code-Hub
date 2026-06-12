scores = [88,72,95 , 60]

new_scores = sorted(scores)
#sorted(key)  #it creates a new list and keep the original list unchanged.
print(new_scores)

descending_order = sorted(scores , reverse=True)
print(descending_order) #sort in ascending order

# scores.sort() #sorted in place , accept only 

scores.sort(reverse=True) #sort in ascending order

print(scores)

#sorting on based of length of string
fruits = ["banana" , "kiwi" , "apple" , "watermelon"]
result = sorted(fruits , key=len)
print(result)

fruits.sort(key = len)
print(fruits)