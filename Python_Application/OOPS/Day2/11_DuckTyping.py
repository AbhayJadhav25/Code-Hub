#Duck typing : It is concept where the type of an object is determined by its behaviour , not by its class

class InkjetPrinter:
  def printdocument(self , document):
    print("InkjetPrinter printing : ",document)

class LaserPrinter:
  def printdocument(self , document):
    print("LaserPrinter printing : ",document)

class  PDFWriter:
  def printdocument(self , document):
    print(f" Saving : {document} as PDF")

def StartPrinting(Device):
  Device.printdocument("Marvellous Notes.")

def main():
  StartPrinting(InkjetPrinter())
  StartPrinting(LaserPrinter())
  StartPrinting(PDFWriter())
main()
