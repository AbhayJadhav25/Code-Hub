import numpy as np
dna =  np.array(['A', 'A', 'A', 'T', 'C', 'C', 'C', 'C', 'G'])
threshold = 2

#1. Count the frequency of each base.
bases , counts = np.unique(dna , return_counts = True)

print("1. Frequency of each base : ")
for base , count in zip(bases , counts):
    print(f"{base} : {count}")

#2. Find the most common base.
max_count = np.max(counts)
most_common = bases[counts == max_count]
print("\n2. Most common base : ")
print(most_common)
print("Frequency : ",max_count)

#Finding base pair sequences longer than a specified threshold.
sequence = []
start = 0
for i in range(1 , len(dna)+1):
    if i == len(dna) or dna[i]!=dna[start]:
        if i - start > threshold:
            sequence.append("".join(dna[start:i]))
        start = i

print("Sequence longer than ",threshold," : ")
if sequence:
    print(sequence)
else:
    print("No Sequence Found")

#4. Reverse the entire DNA sequence
reversed_dna = dna[::-1]
print("\n 4> Reversed DNA sequence : ")
print(reversed_dna)