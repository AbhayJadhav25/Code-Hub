class Students {
  String name;
  int marks;
}

public class ArrayObjects {
  public static void main(String[] args) {
    Students s1 = new Students();
    s1.name = "Abhay";
    s1.marks = 78;

    Students s2 = new Students();
    s2.name = "Aditya";
    s2.marks = 75;

    Students s3 = new Students();
    s3.name = "Mayur";
    s3.marks = 90;

    Students student[] = new Students[3];
    student[0] = s1;
    student[1] = s2;
    student[2] = s3;

    for (Students stud : student) {
      System.out.println(stud.name + " " + stud.marks);
    }
  }
}
