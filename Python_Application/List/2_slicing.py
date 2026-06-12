nums = [10 , 20 , 30 , 40 , 50]
print(nums[1:4])  #including index 1 to 3 i.e(4-1) excluding index 4  o/p : [20,30,40]

print(nums[:3]) 
#including index 0 to 2 (3-1) o/p : [10,20,30]

print(nums[::2]) #including index 0 and print alternative . i.e print 10 then skip 20 then print 30 and so on o/p : [10,30,50]

print(nums[::-2]) #start from last and print its alternative o/p : [50,30,10]

print(nums[::-1]) #reverse the list