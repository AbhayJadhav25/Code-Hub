import hashlib
def CalculateCheckSum(FileName):
  fobj = open(FileName , "rb")

  hobj = hashlib.md5()

  Buffer = fobj.read(1024)

  while(len(Buffer) > 0):
    hobj.update(Buffer)
    Buffer = fobj.read(1024)

  fobj.close()

  return hobj.hexdigest()   #it gives CheckSum.


def main():

 Checksum =  CalculateCheckSum("Demo.txt")
 print(Checksum)

if __name__ == "__main__":
  main()