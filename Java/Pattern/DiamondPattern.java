public class DiamondPattern {
  public static void pattern(int rows) {
    for (int i = 1; i <= rows; i++) {
      for (int j = 1; j <= rows - i; j++) {
        System.out.print(" ");
      }
      for (int j = 1; j <= (i * 2) - 1; j++) {
        System.out.print("*");
      }
      System.out.println();
    }
    for (int i = rows; i >= 1; i--) {
      for (int j = 1; j <= rows - i; j++) {
        System.out.print(" ");
      }
      for (int j = 1; j <= (i * 2) - 1; j++) {
        System.out.print("*");
      }
      System.out.println();
    }
  }

  public static void star(int row) {
    for (int i = 1; i <= row; i++) {
      for (int j = 1; j <= row; j++) {
        if (i == j || i + j == (row + 1)) {
          System.out.print("*");
        } else {
          System.out.print("  ");
        }
      }
      System.out.println();
    }
  }

  public static void main(String[] args) {
    star(5);
  }
}
