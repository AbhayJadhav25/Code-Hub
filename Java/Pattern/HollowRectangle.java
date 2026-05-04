public class HollowRectangle {
  public static void main(String[] args) {
    int rows = 4, cols = 5;
    for (int i = 1; i <= 4; i++) {
      for (int j = 1; j <= 5; j++) {
        if (i == 1 || j == 1 || i == rows || j == cols) {
          System.out.print("*");
        } else {
          System.out.print(" ");
        }
      }
      System.out.println();
    }
  }
}
