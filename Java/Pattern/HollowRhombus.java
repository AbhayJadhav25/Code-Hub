public class HollowRhombus {
  public static void pattern(int rows) {
    for (int i = 1; i <= rows; i++) {
      for (int j = 1; j <= rows - i; j++) {
        System.out.print(" ");
      }
      for (int j = 1; j <= rows; j++) {
        if (i == 1 || j == 1 || i == rows || j == rows) {
          System.out.print("*");
        } else {
          System.out.print(" ");
        }
      }
      System.out.println();
    }
  }

  public static void main(String[] args) {
    pattern(5);
  }
}
