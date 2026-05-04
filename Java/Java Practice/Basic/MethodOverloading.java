class Calculator {
  int a;

  public int add(int a, int b) {
    return a + b;
  }

  public int add(int a, int b, int c) {
    return a + b + c;
  }

  public double add(double a, int b) {
    return a + b;
  }
}

public class MethodOverloading {
  public static void main(String[] args) {
    Calculator c = new Calculator();
    int add1 = c.add(5, 4);
    System.out.println(add1);

    add1 = c.add(5, 4, 3);
    System.out.println(add1);

    double add2 = c.add(12.5, 6);
    System.out.println(add2);
  }
}
