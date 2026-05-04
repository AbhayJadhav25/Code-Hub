import java.util.*;

public class EvenOddSum {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int no = sc.nextInt();

    int evenSum = 0, oddSum = 0;

    while (no > 0) {
      int lastDigit = no % 10;
      if (lastDigit % 2 == 0) {
        evenSum += lastDigit;
      } else {
        oddSum += lastDigit;
      }
      no /= 10;
    }
    System.out.println(evenSum);
    System.out.println(oddSum);
  }
}
