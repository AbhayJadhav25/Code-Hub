public class DecimalToBinary {
  public static void dectoBin(int num) {
    // while (num > 0) {
    // int rem = num % 2;
    // System.out.print(rem);
    // num /= 2;
    // }
    int pow = 0, binary = 0;
    while (num > 0) {
      int rem = num % 2;
      binary = binary + (rem * (int) Math.pow(10, pow));
      pow++;
      num /= 2;
    }
    System.out.println("Binary : " + binary);
  }

  public static void main(String[] args) {
    dectoBin(10);
  }
}
