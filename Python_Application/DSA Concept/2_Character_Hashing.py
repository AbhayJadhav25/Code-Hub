'''
ord('ch') -> Gives ASCII value of the character
'''
str = 'azyzxyyzaaaa'
q = ['d' , 'a' , 'y' ,'z' , 'x']

hashlist = [0]*27

for ch in str:
    ascii = ord(ch)
    idx = ascii - 97
    hashlist[idx] = hashlist[idx] + 1

for ch in q:
    ascii = ord(ch)
    idx = ascii - 97
    print(hashlist[idx] , end =" ")

print()

#dictionary
freq_dict = {}
for ch in str:
    if ch in freq_dict:
        freq_dict[ch] = freq_dict[ch] + 1
    else:
        freq_dict[ch] = 1

for ch in q:
    if ch not in str:
        print(0 , end = " ")
    else:
     print(freq_dict[ch] , end = " ")