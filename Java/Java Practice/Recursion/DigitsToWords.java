import java.util.*;

public class DigitsToWords {
  static String[] words = {
      "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"
  };

  static void convertToWords(int n) {
    if (n == 0)
      return;

    int digit = n % 10;
    convertToWords(n / 10);

    System.out.print(words[digit] + " ");
  }

  public static void main(String[] args) {
    int num = 1947;
    convertToWords(num);
  }
}
