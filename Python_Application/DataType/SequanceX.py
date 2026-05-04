Value1 = [10,20,30,40,10]      #list Duplicate
print(Value1[0])      #10
Value1[2] = 35
print(Value1)
print(Value1[2])
Value2 = (10,20,30,40,10)      #tuple Duplicate
print(Value2[0]) #10
Value2[2] = 35  #Error , Can't change tuple elements

print(Value2)
Value3 = {10,20,30,40}      #set , No Duplicate
#print(Value3[0])  #Error , there is no index format in set . set is unordered

