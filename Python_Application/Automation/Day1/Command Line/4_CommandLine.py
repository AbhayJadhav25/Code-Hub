import sys # 4_CommandLine.py 11 10

def main():
 Ans = 0
 Ans = int(sys.argv[1]) + int(sys.argv[2])
 print("Addition : ", Ans)

if __name__ == "__main__":
  main()