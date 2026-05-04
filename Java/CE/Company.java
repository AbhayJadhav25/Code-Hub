class Empolyee {
  String name;
  int salary;

  Empolyee(String name, int salary) {
    this.name = name;
    this.salary = salary;
  }

  void display() {
    System.out.println("Name = " + name + "\n" + "Salary = " + salary);
  }
}

class Developer extends Empolyee {
  String project_Name;

  Developer(String name, int salary, String project_Name) {
    super(name, salary);
    this.project_Name = project_Name;
  }

  void display() {
    super.display();
    System.out.println("Project Name : " + project_Name);
  }
}

class Programmer extends Developer {
  String ProgrammingLanguage;

  Programmer(String name, int salary, String project_Name, String ProgrammingLanguage) {
    super(name, salary, project_Name);
    this.ProgrammingLanguage = ProgrammingLanguage;
  }

  void display() {
    super.display();
    System.out.println("Programming Language = " + ProgrammingLanguage);
  }
}

public class Company {
  public static void main(String[] args) {
    Programmer p = new Programmer("Abhay", 25000, "Product Base", "Python");

    p.display();
  }
}
