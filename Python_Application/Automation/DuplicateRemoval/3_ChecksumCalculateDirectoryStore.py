import hashlib
import os
def CalculateCheckSum(FileName):
  fobj = open(FileName , "rb")

  hobj = hashlib.md5()

  Buffer = fobj.read(1024)

  while(len(Buffer) > 0):
    hobj.update(Buffer)
    Buffer = fobj.read(1024)

  fobj.close()

  return hobj.hexdigest()   #it gives CheckSum.

def DeleteDuplicate(Path = "Marvellous"):
  MyDict = FindDuplicate(Path)
  Result = list(filter(lambda x : len(x) > 1 , MyDict.values()))    
  count = 0
  cnt = 0

  for value in Result:
    for subvalue in value:
      count+=1
      if(count>1):
        print("Deleted file : ",subvalue)
        os.remove(subvalue)
        cnt+=1
    count = 0
  
  print("Total Deleted File : ",cnt)




def FindDuplicate(DirectoryName = "Marvellous"):
  Ret = False
  Ret = os.path.exists(DirectoryName)

  if(Ret == False):
    print("There is no such directory")
    return
  
  if(not(os.path.isdir(DirectoryName))):
    print("It is not a directory.")

  Duplicate = {}

  for FolderName , subFolder , Filename in os.walk(DirectoryName):
    # print("Enter")
    for fname in Filename:
      fname = os.path.join(FolderName , fname)
      Checksum = CalculateCheckSum(fname)

      if Checksum in Duplicate:
        Duplicate[Checksum].append(fname)
      else:
        Duplicate[Checksum] = [fname]

      # print(f"File name : {fname} Checksum : {Checksum}")
  return Duplicate


def DisplayResult(MyDict):
  Result = list(filter(lambda x : len(x) > 1 , MyDict.values()))    

  count = 0

  for value in Result:
    for subvalue in value:
      count+=1
      # print(subvalue)
    # print("Value of Count is : ",count)
    

def main():
  Ret = FindDuplicate()

  DisplayResult(Ret) 
if __name__ == "__main__":
  main()