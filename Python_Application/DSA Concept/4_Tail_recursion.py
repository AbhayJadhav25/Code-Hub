#print "Jai shree Ram" 8 times
count = 0
def func():
    global count
    if count == 8:
        return 
    
    count = count + 1
    func()
    print("Jai Shree Ram")

func()