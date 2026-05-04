package series;

public class Package1 {
  public void fibonacci(int num) {
    if (num < 1) {
      System.out.println("Inavlaid Number of terms.");
      return;
    }
    int a = 0, b = 1, c;
    System.out.print(a + "  " + b + " ");
    for (int i = 3; i <= num; i++) {
      c = a + b;
      System.out.print(c + " ");
      a = b;
      b = c;
    }
    System.out.println();
  }

  public void cubes(int num) {
    for (int i = 1; i <= num; i++) {
      System.out.print((i * i * i) + "  ");
    }
    System.out.println();
  }

  public void squares(int num) {
    for (int i = 1; i <= num; i++) {
      System.out.print((i * i) + "  ");
    }
    System.out.println();
  }
}
