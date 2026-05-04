import series.Package1;

public class PackageMain {
  public static void main(String[] args) {
    Package1 p1 = new Package1();
    System.out.println("Fibonacci Series\n");
    p1.fibonacci(10);

    System.out.println("\nCube Of Number\n");
    p1.cubes(10);

    System.out.println("\n Square Of Number\n");
    p1.squares(10);
  }
}
