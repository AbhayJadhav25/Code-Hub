public class InvertedRotatedHalfPyramid {
  public static void pyramid(int row) {
    for (int i = 1; i <= row; i++) {
      for (int j = 1; j <= row - i; j++) {
        System.out.print(" ");
      }
      // print star
      for (int j = 1; j <= i; j++) {
        System.out.print("*");
      }
      System.out.println();
    }
  }

  public static void main(String[] args) {
    pyramid(7);
  }
}
