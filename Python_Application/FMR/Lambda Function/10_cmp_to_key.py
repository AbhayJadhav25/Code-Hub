from functools import cmp_to_key
def mycmp(a,b):
    print(f'comparing {a} and {b}')

    if a>b :
        return 1
    elif a<b:
        return -1
    else :
        return 0
    
print(sorted([1,2,4,2] , key = cmp_to_key(mycmp)))

'''
1,2,4,2  ---> 2 & 1 compare
1,2,4,2  --->4 & 2 compare
1,2,2,4 ----> 2 & 4 compare and swap
1 ,2 ,2 , 4 -->2 & 2 compare
'''

