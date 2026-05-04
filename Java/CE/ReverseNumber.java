public class ReverseNumber {
  public static void main(String args[]) {
    System.out.println("Enter any number : ");
    int no = Integer.parseInt(args[0]);

    int rev = 0;

    while (no > 0) {
      rev = (rev * 10) + (no % 10);
      no /= 10;
    }
    System.out.println("Reverse Integer : " + rev);
  }
}
