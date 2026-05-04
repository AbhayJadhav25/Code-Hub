public class BitwiseOperator {
  public static void main(String[] args) {
    /*
     * System.out.println(5 & 6);
     * System.out.println(5 | 6);
     * System.out.println(5 ^ 6);
     * System.out.println(~5);
     * System.out.println(~1);
     * System.out.println(5 << 2);
     * System.out.println(6 >> 1);
     */

    int num = 6;
    int num2 = 7;
    evenOdd(num);
    evenOdd(num2);
  }

  public static void evenOdd(int num) {
    int bitMask = 1;
    if ((num & bitMask) == 0) {
      System.out.println("Even");
    } else {
      System.out.println("Odd");
    }
  }
}
