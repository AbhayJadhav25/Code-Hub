#Q. Print Shree Ram 8 time

count = 0 
def printStr():
    global count
    if count == 8:
        return
    else:
        print(f"{count+1} - > Jai shree Ram")
        count = count + 1
    printStr()

printStr()