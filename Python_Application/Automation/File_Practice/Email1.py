import smtplib as s
import schedule
import time
def mailTransfer():
  obj =  s.SMTP('smtp.gmail.com',587)
  obj.ehlo()
  obj.starttls()

  obj.login('denverkjohn@gmail.com' , 'niqf duwz cizc oohg')
  subject = "test python"
  body = "I love Python"
  message = "subject : {}\n\n{}".format(subject , body)
  listadd = ['jaggujagg06@gmail.com']
  obj.sendmail('denverkjohn@gmail.com' , listadd , message)
  print("send mail.")
  obj.quit()

def main():

  schedule.every(0.1).seconds.do(mailTransfer)

  while(True):
    schedule.run_pending()
    
if __name__ == "__main__":
  main()
