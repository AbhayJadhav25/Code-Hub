import threading

def display():
  print("Inside Display Function : ",threading.get_ident())

  for i in range(10):
    print("Inside Display : ")



def main():
  print("Inside Main : ",threading.get_ident())
  t1 = threading.Thread(target = display) #creates Thread
  t1.start()
  
  t2 = threading.Thread(target = display) #creates Thread
  t2.start()
  t1.join() #it wait until child thread complete its task
  t2.join()
  print("End of main")

if __name__ == "__main__":
  main()

