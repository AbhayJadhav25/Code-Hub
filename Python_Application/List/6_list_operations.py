nums = [10,20,30,40,50]

print(nums) #[10,20,30,40,50]

nums.append(60) 
print(nums)#[10,20,30,40,50 ,60]

nums2 = [70,80]
nums.extend(nums2)
print(nums) #[10,20,30,40,50,60,70,80]

nums3 = [90,100]
nums.append(nums3) ##[10,20,30,40,50,60,70,80 , [90,100]]
print(nums)
print(nums[8][0])

print(f"Length of list before insert {len(nums)}")
nums.insert(0 , 5) #insert at 0th position and value of the 0th position i.e 10 shift to the next position and list size grow
print(nums) #[5, 10, 20, 30, 40, 50, 60, 70, 80, [90, 100]]
print(f"Length of list after insert {len(nums)}")

nums.insert(10 , 110)
print(nums)

nums.insert(12 , 120)
print(nums)
'''
Before this insertion list has 10 index and we directly insert value at index 12 , but python insert it at position 11. so when we try to print nums[12] it gives IndexError.
'''

# print(nums[12])

'''
list.insert(i, x)

Insert x before position i.

If i is larger than the list length, Python does not create empty spaces up to that index.

Instead, it treats the index as the end of the list and appends the value there.

python sees 12 > len(nums) so it inserts at the end.

rule :
0 <= index <= n --->meaningful insertion
index > n --> index = n last position
index < -n -->index = 0
'''
# nums.remove(90) #ValueError: list.remove(x): x not in list

nums.remove([90,100])
# nums.remove(10,20,30) #remove takes exacctly one argument
nums.remove(50)

#remove() delete the first matching value , and shift the other value. does'nt make remove position to 0.

print(nums)

nums.pop() #usually removes last item.
print(nums.pop(5))

idx = nums.index(20)
print(idx)  #index() gives first position of the value.

nums.clear() #None
print(type(nums))

nums = [10 , 20 , 10 ,40 , 50]
cnt_10 = nums.count(10) #count occurrences of 10
print(cnt_10)

nums.reverse()
print(nums) #reverse the list in place  , does'nt create another list

list_len = len(nums)
print(list_len)

minimum , maximum , sum = min(nums) , max(nums) , sum(nums)
print(f"Minimum = {minimum}")
print(f"Maximum = {maximum}")
print(f"Sum = {sum}")

################################################
#enumerate() give index and value both , it is iterator
fruits = ["apple" , "banana" , "mango"]
for index , value in enumerate(fruits):
    print(index , value)

    #here if we only user for index in enumerate(fruits) then it prints tuple like (0 , apple)...

#custom part
for index , value in enumerate(fruits , start= 1):
    print(index , value)

#reversed() --> it is also iterator , iterate from end to start

nums = [10 , 20 , 30 , 40]
for i in reversed(nums):
    print(i)

#convert to list
result = list(reversed(nums))
print(result)

'''
reverse()   --> original list is change
reversed()  -> this is iterator , original list is unchanged.
'''

#any(lst)  --> returns true if at least one element is True.
values = [False , False , False]
print(any(values)) #False

values.append(True)
print(any(values)) #True

#real-world example
marks = [25 , 35 , 40]
result = any(mark >= 40 for mark in marks)
print(result)

#all(lst)  -> returns true only if every element is True
marks = [70 , 60  , 80]
result = all(mark > 55 for mark in marks)
print(result)

#x in list / x not in list
nums = [10 , 20 , 30 , 40 , 60 , 70 , 80 , 90]
print(20 in nums) #True
print(50 not in nums) #True
print(30 not in nums) # False
print(60 in nums) # False

#slicing step
#lst[i:j:k]
#lst[start : end :step]

print(nums[2:6:3]) #step is 3 it means skip 2 element output : [30 , 70]

nums1 = [1,2,3]
nums2 = [4,5,6]
c = nums1 + nums2
print(c)

print(nums1*3) #[1,2,3,1,2,3,1,2,3]

#nums = [10 , 20 , 30 , 40 , 60 , 70 , 80 , 90]
# del nums[1]
print(nums)

del nums[1 : 4 : 2] 
print(nums) #[10 ,30 , 60 , 70 , 80 , 90]