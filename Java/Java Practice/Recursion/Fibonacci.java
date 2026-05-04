public class Fibonacci {
  public static int fibo(int num) {
    if (num == 0)
      return 0;
    if (num == 1)
      return 1;
    return fibo(num - 1) + fibo(num - 2);
  }

  public static void main(String[] args) {
    int num = 8;
    for (int i = 0; i <= num; i++) {
      System.out.println(fibo(i));
    }
  }
}
