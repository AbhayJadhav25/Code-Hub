class Student {
  int marks;
  String name;

  Student(int marks, String name) {
    this.marks = marks;
    this.name = name;
  }

  void show() {
    System.out.println("Congrtes ! " + name + ", You got " + marks);
  }
}

public class ConstructorXX {
  public static void main(String[] args) {
    Student s = new Student(98, "Aditya");
    s.show();
  }
}
