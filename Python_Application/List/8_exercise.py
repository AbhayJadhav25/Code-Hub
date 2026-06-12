#Q1  -> create empty list in three different ways
lst1 = []
lst2 = list()

print(lst1 , lst2)


#Q2 difference between [1,2,3] and list(1,2,3)

a = [1 ,2 ,3]
b = list((1,2,3)) #[1,2,3]

# print(id(a))
# print(id(b))

#both are different in memory , they are seprates.

a = [1,2]
b = a
b.append(3)
print(a.pop())
print(a)  #append in b changes happen in a too.

#remove even number from list
nums = [16 , 5 , 9 , 10 , 15]
for num in nums:
    if num % 2 == 0:
        nums.remove(num)
    
print(nums)

from math import sqrt
#list containing only square of odd numbers.
nums = [4 , 25 , 15 , 16 , 9 , 36 , 21 , 121]
ans = []
for num in nums:
    if  num%2 != 0:
        ans.append(num**2)
print(ans)

#lst = [[1,2] , [3,4] , [5]] flatten 1 level without using external library
lst = [[1,2] , [3,4] , [5]]
flattended = []
for sublist in lst:
    for item in sublist:
        flattended.append(item)
print(flattended)

#top 3 values from the list without changing original list

nums = [4 , 25 , 15 , 16 , 9 , 36 , 21 , 121]

unique = list(set(nums))
sort_unique = sorted(unique)
print(f"Top 3 largest = {sort_unique[-3:]}")

#Delete every third element from the list
del nums[2::3]
print(nums)

#rotate list by 1 position

def rotate_list(lst):
    idx0 = lst[0]

    for i in range(1 , len(lst)):
        lst[i-1] = lst[i]

    lst[len(lst)-1] = idx0

    return lst

nums = [10,20,30,40]
ans = rotate_list(nums)
print(ans)