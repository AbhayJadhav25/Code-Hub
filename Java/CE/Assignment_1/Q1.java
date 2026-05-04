import java.util.Scanner;

class Empolyee {
  public String name;
  public String position;
  public double salary;

  Empolyee() {
    name = "";
    position = "";
    salary = 0.0;
  }

  Empolyee(String name, String position, double salary) {
    this.name = name;
    this.position = position;
    this.salary = salary;
  }

  @Override
  public String toString() {
    return ("Name = " + name + "\nPosition = " + position + "\nSalary = " + salary);
  }
}

class Q1 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int obj_count = 0;

    while (true) {
      System.out.println("Enter Empolyee name , Position , Salary  : ");
      String name = sc.next();
      String pos = sc.next();
      double salary = sc.nextDouble();

      Empolyee e1 = new Empolyee(name, pos, salary);
      String emp_details = e1.toString();
      System.out.println(emp_details);
      System.out.println("Object Count = " + ++obj_count);
    }
  }
}