
#swap without using temp
a = 10
b = 20
b,a = a,b
print(a,b)

#Find frequency of every element using count().
t = (1,2,2,3,3,3)
res = {}
for i in range(len(t)):
    if t[i] not in res:
        res[t[i]] = t.count(t[i])
print(res)

#second largest element in tuple
t = (1,2,2,3,3,3)
unique_sort = sorted(set(t))
print(unique_sort[-2])

#Remove duplicates while preserving order.
t = (1,2,2,3,1,4)
lst = list(t)
res = []
for val in lst:
    if val not in res:
        res.append(val)
print(tuple(res))

#Flatten
t = ((1,2),(3,4),(5,6))
res = [x for sub in t for x in sub]
print(tuple(res))

#extended unpacking
t = (10,20,30,40,50,60)
first , *middle , last = t
print(first)
print(last)
print(middle)

#Find all pairs whose sum equals target.
t = (1,2,3,4,5)
target = 6

for i in range(0,len(t)-1):
    val = t[i]
    for j in range(i+1 , len(t)):
        if val + t[j] == target:
            print((val , t[j]))

pairs = []
seen = set()
for val in t:
    num_find = target - val
    if num_find in seen:
        pairs.append((val , num_find))
    seen.add(val)
print(pairs)