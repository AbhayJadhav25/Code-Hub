nums = [10,20,10,30,20,10]
freq = {}

for num in nums:
    freq[num] = freq.get(num , 0)+1

freq1 = {num : nums.count(num) for num in nums}
print(freq1)
print(freq)

freq3 = {}

for num in nums:
    if num in freq3:
        freq3[num] += 1
    else:
        freq3[num] = 1

print(freq3)

from collections import Counter

freq4 = dict(Counter(nums))
print(freq4) #{10: 3, 20: 2, 30: 1}