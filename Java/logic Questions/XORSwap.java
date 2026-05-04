public class XORSwap {
  public static void swap(int a, int b) {
    System.out.println("Before Swapping : a = " + a + " b = " + b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    System.out.println("After Swapping : a = " + a + " b = " + b);
  }

  public static void main(String[] args) {
    swap(3, 4);
  }
}
