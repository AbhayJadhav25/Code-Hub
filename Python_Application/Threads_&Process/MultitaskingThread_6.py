import threading

def display():
  for i in range(10):
    print("Inside Display : ",threading.get_ident())

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

