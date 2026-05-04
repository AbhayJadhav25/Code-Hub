import threading

def display():
  print("Inside Display Function : ",threading.get_ident())


def main():
  print("Inside Main : ",threading.get_ident())
  t = threading.Thread(target = display) #creates Thread
  t.start()
  print(type(t)) #<class 'threading.Thread'>
  print("End of main")

if __name__ == "__main__":
  main()

