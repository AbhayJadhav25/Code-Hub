public class Factorial {
  public static int fact(int num) {
    int f = 1;
    while (num > 0) {
      f *= num;
      num--;
    }
    return f;
  }

  public static void main(String[] args) {
    int n = 5;
    int Fact = fact(n);
    System.out.println(Fact);
  }
}
