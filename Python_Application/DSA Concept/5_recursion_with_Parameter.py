#print "Jai shree Ram" 8 times

def func(count):
    if count == 0:
        return 
    print("Jai Shree Ram")

    func(count - 1)

func(8)