def Phoenix():
  print("Inside Phoenix")

  def zara():
    print("Inside Zara")


def main():
  # zara() #NameError: name 'zara' is not defined
   Phoenix.zara()  #AttributeError: 'function' object has no attribute 'zara'

if __name__ == "__main__":
  main()
