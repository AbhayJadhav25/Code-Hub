import java.util.Scanner;
abstract class Staff{
     String name ;
     String address;

     Staff(String name , String address){
        this.name = name;
        this.address = address;
     }

     public void display(){
        System.out.println(
            "Name  :  "+name
            +"\nAddress  :  "+address
        );
     }
}

class FullTimeStaff extends Staff{
    String dept;
    double salary;

    FullTimeStaff(String name , String address,String dept , double salary){
        super(name , address);
        this.dept = dept;
        this.salary = salary;
    }

    @Override
    public void display(){
        super.display();
        System.out.println(
            "Department  :  "+dept
            +"\nSalary :  "+salary
        );
    }
}

class PartTimeStaff extends Staff{
    int no_of_hours;
    int rate_per_hour;

    PartTimeStaff(String name , String address,int no_of_hours , int rate_per_hour){
        super(name , address);
        this.no_of_hours = no_of_hours;
        this.rate_per_hour = rate_per_hour;
    }
    @Override
    public void display(){
        super.display();
        System.out.println(
            "Number of Working Hours  :  "+no_of_hours
            +"\nRate per Hour  :  "+rate_per_hour
        );
    }
}
public class Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of objects = ");
        int n = sc.nextInt();

        Staff s[]= new Staff[n];

        for(int i = 0 ; i<n ; i++){
            System.out.println("Enter Cateogry : (FT / PT) or enter exit ");
            String ch = sc.next();

            if(ch.equals("FT")){
                System.out.println("Enter Name , Address , department and Salary of Empolyee : ");
                String name = sc.next();
                String Addr = sc.next();
                String dept = sc.next();
                double salary = sc.nextDouble();

                s[i] = new FullTimeStaff(name, Addr, dept, salary);
                s[i].display();
            }else if(ch.equals("PT")){
                System.out.println("Enter Name , Address ,no of working hours and rate per hour of Empolyee : ");
                String name = sc.next();
                String Addr = sc.next();
                int no_of_hours = sc.nextInt();
                int rate_per_hour = sc.nextInt();

               s[i] = new PartTimeStaff(name, Addr, no_of_hours, rate_per_hour);
                s[i].display();
            }else{
                System.exit(0);
            }
        }
    }
}
