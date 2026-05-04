import threading

def display(No):
  print("Inside Display : ",No)
  

def main():
  t = threading.Thread(target = display, args = (11,))
  t.start()

if __name__ == "__main__":
  main()

