
public class Question {
  // Swaping without without using third variable
  public static void swap(int a, int b) {
    System.out.println("Before Swapping : a = " + a + " b = " + b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    System.out.println("After Swapping : a = " + a + " b = " + b);
  }

  // Add 1 to an integer using Bit manipulation
  public static int add1(int num) {
    return -~(num);
  }

  public static char upperToLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
      return (char) (ch | 32);
    }
    return ch;
  }

  public static char lowerToUpper(char ch) {
    if (ch >= 'a' && ch <= 'z') {
      return (char) (ch & ~32);
    }
    return ch;
  }

  public static void main(String[] args) {
    swap(3, 4);
    System.out.println(add1(7));

    for (char ch = 'A'; ch <= 'Z'; ch++) {
      System.out.print(upperToLower(ch)); // prints abcdefghijklmnopqrstuvwxyz
    }
    System.out.println();
    for (char ch = 'a'; ch <= 'z'; ch++) {
      System.out.print(lowerToUpper(ch) + " ");
    }
  }
}
