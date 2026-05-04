import java.util.Scanner;
class Vechicle{
    String company;
    double price;

    Vechicle(String company , double price){
        this.company = company;
        this.price = price;
    }

    public void display(){
        System.out.println(
            "Company = "+company
            +"\nPrice = "+price
        );
    }
}
class LightMotorVechicle extends Vechicle{
        int mileage;

    LightMotorVechicle(String company , double price,int mileage){
        super(company , price);
        this.mileage = mileage;
    }
    @Override
    public void display(){
        System.out.println("Vechicle Type = Light Motor Vechicle");
        super.display();
        System.out.println("Mileage  =  "+mileage+"\n\n");
    }
}
class HeavyVechicle extends Vechicle{
        int capacity_in_tons;

    HeavyVechicle(String company , double price,int capacity_in_tons){
        super(company , price);
        this.capacity_in_tons = capacity_in_tons;
    }
    @Override
    public void display(){
        System.out.println("Vechicle Type = Heavy Motor Vechicle");
        super.display();
        System.out.println("Capacity in Tons  =  "+capacity_in_tons+"\n\n");
    }
}
public class Q6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number of objects = ");
        int n = sc.nextInt();

        Vechicle v[] = new Vechicle[n];

        System.out.println("Enter Data : \n\n");
        for(int i = 0 ; i<n ; i++){
            System.out.println("Enter Type of Vechicle (Heavy/Motor) : (M/H)");
            String choice = sc.next();
            
            if(choice.equals("M")){
                System.out.println("Enter Company Name , Price = ");
                String name = sc.next();
                Double price = sc.nextDouble();

                System.out.println("Enter Mileage : ");
                int mileage = sc.nextInt();

                v[i] = new LightMotorVechicle(name , price , mileage);
            }else if(choice.equals("H")){
                System.out.println("Enter Company Name , Price = ");

                String name = sc.next();
                Double price = sc.nextDouble();

                System.out.println("Enter Capacity : ");
                int capacity = sc.nextInt();

                v[i] = new HeavyVechicle(name, price, capacity);
            }else{
                System.out.println("Invalid Choice");
                i--;
            }
        }
    
        for(Vechicle vechicle : v){
            vechicle.display();
        }
        sc.close();
    }
}
