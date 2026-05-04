import java.util.*;

class squarePattern {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter No. : ");
    int n = sc.nextInt();

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        System.err.print("* ");
      }
      System.out.println();
    }
  }
}