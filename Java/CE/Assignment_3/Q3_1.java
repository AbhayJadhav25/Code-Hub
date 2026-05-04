import java.util.*;
class Employee{
    private int id;
    private String name , dept;
    double salary;

    Employee(){
        id = 0;
        name = null;
        dept = null;
    }

    Employee(int id , String name , String dept , double salary){
        this .id = id ;
        this.name = name;
        this.dept = dept;
        this.salary = salary;
    }
   void display(){
        System.out.println (
          "Id = "+id+"\nName  =  "+name+"\nDepartment = "+dept+"\nSalary  =  "+salary
        );
    }
    public double getSalary(){
        return salary;
    }
}
class Manager extends Employee{
    double bonus , totalSalary;
    Manager(int id , String name , String dept , double salary ,double bonus){
        super(id,name,dept,salary);
        this.bonus = bonus;
        totalSalary = bonus+super.getSalary()
;    }

    
    @Override
   void display(){
        super.display();
        System.out.println(
            "Bonus = "+bonus
            +"\nTotal Salary  =  "+totalSalary
         );
    }
}
public class Q3_1 { 
 public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter number of objects =  ");
    int n = sc.nextInt();

    Manager m[] = new Manager[n];

    for(int i = 0 ; i<n ; i++){
        System.out.println("Enter Details of "+i+"Employee");

        System.out.println("Enter  Id = ");
        int id = sc.nextInt();

        System.out.println("Enter Name =  ");
        String name = sc.next();

        System.out.println("Enter Department = ");
        String dept = sc.next();

        System.out.println("Enter Salary = ");
        double salary = sc.nextDouble();

        System.out.println("Enter Bonus = ");
        double bonus = sc.nextDouble();

        m[i] = new Manager(id,name,dept,salary,bonus);
    }
    int max = 0;
    for(int i = 1 ;i<n;i++){
        if(m[i].totalSalary > m[max].totalSalary){
            max = i;
        }
    }
    System.out.println("Manager Details having maximum total salary : \n ");
    m[max].display();
 }   
}
