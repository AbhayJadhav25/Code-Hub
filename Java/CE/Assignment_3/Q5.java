import java.util.*;
interface CreditCardInterface{
    public void viewAmount();
    public void useCrad(double debit);
    public void payCredit(double paidBillAmount);
    public void increaseLimit(double amount);
}
class SilverCardCustomer implements CreditCardInterface{
    String name;
    String cardNumber;
    double creditAmount = 0;
    double creditLimit;
    int count = 0;

    SilverCardCustomer(String name ,String cardNumber){
        this.name = name;
        if(cardNumber.length() == 16){
            this.cardNumber = cardNumber;
        }else{
            System.out.println("Crad number not valid");
        }
        creditAmount = 0;
        creditLimit = 50000;
    }

    public void viewAmount(){
        System.out.println(
            "Name  =  "+name
            +"\nCard Number  =  "+cardNumber
            +"\nCredit Amount  =  "+creditAmount
            +"\nCredit Limit  =  "+creditLimit
        );
    }

    public void useCrad(double amount){
        if(creditAmount+amount <=  creditLimit){
            creditAmount+=amount;
        }else{
            System.out.println("No sufficient Balance");
        }
    }

    public void payCredit(double amount){
        if(amount<=creditAmount ){
            creditAmount-=amount;
        }else{
            System.out.println("No Credit Amount to pay");
        }
    }

    public void increaseLimit(double amount){
        System.out.println("Can't Increase Limit for Silver card Customer");
    }
}
class GoldCardCustomer extends SilverCardCustomer{

    GoldCardCustomer(String name ,String cardNumber){
        super(name , cardNumber);
        creditAmount = 0;
        creditLimit = 100000;
    }

    public void viewAmount(){
        super.viewAmount();
    }

    public void useCrad(double amount){
        super.useCrad(amount);
    }

    public void payCredit(double amount){
        super.payCredit(amount);
    }

    @Override
   public void increaseLimit(double amount){
        
        if(count < 3 && amount <=5000){
            creditLimit+=amount;
            count++;
        }else if(count >=3){
            System.out.println("Can't Increase Limit more than 3 time");
        }else{
            System.out.println("Can't Increase Limit more than 5000.");
        }
    }
}
public class Q5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        GoldCardCustomer gold = new GoldCardCustomer("Abhay", "1234567890123456");
        SilverCardCustomer silver = new SilverCardCustomer("Omakr","1213141516171819");

        while(true){
            int cardChoice , choice;
            double amount;

            System.out.println("1 : Silver Card\n2 : Golden Card\n3 : Exit");
            System.out.println("Enter your choice : ");
            cardChoice = sc.nextInt();

            if(cardChoice == 3){
                System.out.println("Exiting.....");
                System.exit(0);
            }

            System.out.println("1 : View Card details\n2 : Use Card\n3 : Pay credit bil\n4 : Increase Limit\n5 : Exit");

            System.out.println("Enter Your choice :  ");
            choice = sc.nextInt();

            switch(choice){
                case 1 : 
                    if(cardChoice == 1){
                        silver.viewAmount();
                    }else{
                        gold.viewAmount();
                    }
                    break;
                
                case 2 : 
                    System.out.println("Enter Amount to use : ");
                    amount = sc.nextDouble();

                    if(cardChoice == 1){
                        silver.useCrad(amount);
                    }else{
                        gold.useCrad(amount);
                    }
                    break;
                
                case 3 : 
                    System.out.println("Enter Amount to pay credit : ");
                    amount = sc.nextDouble();

                    if(cardChoice == 1){
                        silver.payCredit(amount);
                    }else{
                        gold.payCredit(amount);
                    }
                    break;
                
                case 4 : 
                    System.out.println("Enter Amount to increase limit : ");
                    amount = sc.nextDouble();

                    if(cardChoice == 1){
                        silver.increaseLimit(amount);
                    }else{
                        gold.increaseLimit(amount);
                    }
                    break;
                
                case 5:
                    System.out.println("Exiting.....");
                    System.exit(0);
                    break;

                default:
                    System.out.println("Enter Valid choice");
            }
        }
        
    }
}
