class Empolyee {
  int empId;
  String Name;
  private int salary;

  public int getempId() {
    return empId;
  }

  public void setEmpId(int id) {
    if (id < 0) {
      System.out.println("Empolyee Id can't be Negative");
    } else {
      empId = id;
    }
  }

  public int getSalary() {
    return salary;
  }

  public void setSalary(int salary) {
    if (salary < 0) {
      System.out.println("Salary can't be 0 or negative");
    } else {
      this.salary = salary;
    }
  }
}

public class Getter_SetterX {
  public static void main(String[] args) {
    Empolyee emp = new Empolyee();
    emp.setEmpId(101);
    System.out.println(emp.getempId());
    emp.setEmpId(-101);
    System.out.println(emp.getempId());
  }
}
