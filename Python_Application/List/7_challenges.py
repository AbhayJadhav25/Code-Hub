#Mini challenge 1
nums = [10 , 30 , 10 , 50 , 60 ,70 ,  70]

#Given a list of numbers, remove all duplicate values while keeping the original order.

nums2 = []
for i in range(len(nums)):
    if nums[i] not in nums2:
        nums2.append(nums[i])

print(nums2)

#solution 2
nums2 = [10,20,30,30]
unique_nums = list(set(nums2))
unique_nums.sort()
print(unique_nums[-2])

#Mini challenge 2
#Write a function that returns the second largest unique number in a list.
nums2.sort()
print(f"Second laregest Element = {nums2[-2]}")

#Mini challenge 3
#Flatten one level of nesting from a list like [[1, 2], [3, 4], [5]] into [1, 2, 3, 4, 5].

lst = [[1,2] , [3,4] , [5]]
lst2 = []

for nums in lst:
    lst2.extend(nums)

print(lst2)