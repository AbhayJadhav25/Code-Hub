import java.util.*;

public class FactorsOfNumber {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter any Number : ");
    int num = sc.nextInt();

    System.out.println("Factors of " + num);
    for (int i = 1; i <= num / 2; i++) {
      if (num % i == 0) {
        System.out.print(i + " ");
      }
    }
    sc.close();
  }
}
