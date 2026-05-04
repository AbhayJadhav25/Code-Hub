import java.util.*;

public class Combination {
  public static int binomialCoefficient(int n, int r) {

    int nFact = fact(n);
    int rFact = fact(r);
    int nR = fact((n - r));
    int res = nFact / (rFact * nR);
    return res;
  }

  public static int fact(int num) {
    int f = 1;
    while (num > 0) {
      f *= num;
      num--;
    }
    return f;
  }

  public static void main(String[] args) {
    int num = 5, r = 2;
    int res = binomialCoefficient(num, r);
    System.out.println(res);
  }
}
