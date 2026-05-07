n = [5,3,2,2,1,5,5,7,5,10]
m = [10,11,1,9,5,67,2]

'''
Brute Force
'''
for num in m:
    count = 0
    for x in n:
        if num==x:
            count = count + 1
    print(count,end=" ")
print()
#Optimal Solution
hashlist = [0]*11
for num in n:
    hashlist[num] = hashlist[num] + 1

for num in m:
    if num<0 or num > 10:
        print(0 , end=" ")
    else:
        print(hashlist[num] , end=" ")
print()

#Using Dictionary
freq_dict = {}
for num in n:
    if num in freq_dict:
        freq_dict[num] = freq_dict[num]+1
    else:
        freq_dict[num] = 1

for x in m:
    if x<1 or x>10:
        print(0,end=" ")
    elif x not in n:
        print(0,end=" ")
    else:
        print(freq_dict[x] , end=" ")