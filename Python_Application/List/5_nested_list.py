bad = [[0]*3] *2

print(id(bad[0]))
print(id(bad[1]))
bad[0][1] = 9  #id of both inner list is same , so changing in one inner list also similar change happen in inner list 2
print(bad)

'''
output : 
1488462942592
1488462942592
[[0, 9, 0], [0, 9, 0]]
'''