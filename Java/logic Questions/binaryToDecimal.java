public class binaryToDecimal {
  public static int decimalConvert(int num) {
    int pow = 0, Decimal = 0;
    while (num > 0) {
      int lastDigit = num % 10;
      if (lastDigit == 1 || lastDigit == 0) {
        Decimal = Decimal + (lastDigit * (int) Math.pow(2, pow));
        pow++;
      }
      num /= 10;
    }
    return Decimal;
  }

  public static void main(String[] args) {
    int num = 001;
    int res = decimalConvert(num);
    System.out.println(res);
  }
}
