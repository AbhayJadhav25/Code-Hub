#it has Indexed 
#ordered
#Immutable
Data = bytes([65 , 97 , 98])

print(Data)  #b'A' --> b stands for binary
print(type(Data)) #bytes
print(Data[0])
# Data[0] = 66 #Error , #bytes is immutable