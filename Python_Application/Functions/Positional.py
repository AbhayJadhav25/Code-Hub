
def Display(A,B,C,D):
  print(A,B,C,D)

def main():
  # Display(10,20) #Not allowd  #TypeError: Display() missing 2 required positional arguments: 'C' and 'D'   -->less argument
  # Display(10,20,30,40,50) Not allowed #TypeError: Display() takes 4 positional arguments but 5 were given -->extra argument
  Display(10,20,30,40)  #allowed

if __name__ =="__main__" :
  main()