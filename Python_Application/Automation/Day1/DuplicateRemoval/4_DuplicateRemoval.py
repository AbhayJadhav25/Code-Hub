import hashlib
import os 

def CalculateCheckSum(FileName):
    fobj = open(FileName,"rb")# open in binery mode
    hobj = hashlib.md5() 

    Buffer = fobj.read(1024)
    while(len(Buffer)> 0):
        hobj.update(Buffer)
        Buffer = fobj.read(1024)
        
    fobj.close()
    return hobj.hexdigest()# return Checksum

def FindDuplicate(DirectoryName = "Marvellous"):
    Ret = False
    Ret = os.path.exists(DirectoryName)

    if (Ret == False):
        print("There is no such Directory.. ")
        return
    
    Duplicate = {}
    for FolderName,SubFolderName,FileName in os.walk(DirectoryName):
        for fName  in FileName:
            fName = os.path.join(FolderName,fName)
            CheckSum = CalculateCheckSum(fName)

            if CheckSum in Duplicate:
                Duplicate[CheckSum].append(fName)
            else:
                Duplicate[CheckSum] = [fName]

    return Duplicate  

def DisplayResult(MyDict):
    Result = list(filter(lambda X : len(X)> 1, MyDict.values()))
    count = 0
    for value in Result:
        for SubValue in value:
            count = count+1
            print(SubValue)
        print("Value of Count is :",count)
        count = 0  

def DeleteDuplicate(Path = "Marvellous"):
    MyDict = FindDuplicate(Path)

    Result = list(filter(lambda X : len(X)> 1, MyDict.values()))
    count = 0
    Cnt = 0
    for value in Result:
        for SubValue in value:
            count = count+1
            if(count >1):
                print("Deleted File :",SubValue)
                os.remove(SubValue)
                Cnt = Cnt + 1
        count = 0
    print("Total Deleted Files is :",Cnt) 


def main():
    DeleteDuplicate()

if __name__ =="__main__":
    main()