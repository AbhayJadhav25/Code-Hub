import java.util.Scanner;
class Empolyee{
    private int id;
    private String name , dept ;
    private double salary;

    Empolyee(int id , String name , String dept , double salary){
        this.id = id;
        this.name = name;
        this.dept = dept;
        this.salary = salary;
    }

    void display(){
        System.out.println(
            "Id = "+id
            +"\nName  =  "+name
            +"\nDepartment = "+dept
            +"\nSalary = "+salary
        );
    }

    public double getSalary(){
        return salary;
    }
}
class Manager extends Empolyee{
    private int bonus;

    Manager(int id , String name , String dept, double salary , int bonus){
        super(id , name , dept , salary);
        this.bonus = bonus;
    }
    @Override
    public void display(){
        super.display();
    double Totalsalary =bonus + super.getSalary();
        System.out.println("Bonus = "+bonus);
        System.out.println("Maximum Total Salary = "+Totalsalary);
    }
}
public class Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Empolyee Id , Name , Department , Salary , Bonus = ");

        int id = sc.nextInt();
        String name = sc.next();
        String dept = sc.next();
        double salary = sc.nextDouble();
        int bonus = sc.nextInt();

        Manager m = new Manager(id, name, dept, salary, bonus);
        m.display();

        sc.close();
    }
}
