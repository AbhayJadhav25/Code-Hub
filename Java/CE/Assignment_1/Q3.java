import java.util.Scanner;

class Student {
  int rno;
  String name;
  double per;

  Student() {
    rno = 0;
    name = "";
    per = 0.0;
  }

  Student(int s_rno, String s_name, double s_per) {
    rno = s_rno;
    name = s_name;
    per = s_per;
  }

  @Override
  public String toString() {
    return rno + " " + name + " " + per;
  }

}

public class Q3 {
  public static void sortByPer(Student stud[]) {

    int n = stud.length;
    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - i - 1; j++) {
        if (stud[j].per > stud[j + 1].per) {
          Student temp = stud[j];
          stud[j] = stud[j + 1];
          stud[j + 1] = temp;
        }
      }
    }
    for (Student s : stud) {
      System.out.println(s);
    }
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter Number of Objects = ");
    int n = sc.nextInt();

    Student stud[] = new Student[n];

    for (int i = 0; i < n; i++) {
      System.out.println("Enter Student Roll no , Name , Percantage : ");
      int rno = sc.nextInt();
      String name = sc.next();
      double per = sc.nextDouble();

      stud[i] = new Student(rno, name, per);
    }
    sortByPer(stud);
    sc.close();
  }
}
