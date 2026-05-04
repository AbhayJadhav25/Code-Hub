import threading

def display():
  print("Inside Display Function : ",threading.get_ident())

  for i in range(100):
    print("Inside Display : ")



def main():
  print("Inside Main : ",threading.get_ident())
  t = threading.Thread(target = display) #creates Thread
  t.start()
  # print(type(t)) #<class 'threading.Thread'>
  print("End of main")

if __name__ == "__main__":
  main()

