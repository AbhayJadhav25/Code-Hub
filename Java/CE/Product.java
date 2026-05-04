import java.util.Scanner;

public class Product {
  static class miniProd {
    int id, price;
    String name;

    miniProd(int id, int price, String name) {
      this.id = id;
      this.price = price;
      this.name = name;
    }

    void displayName() {
      System.out.println("Product Name = " + name);
    }
  }

  public static void minimum(miniProd arr[]) {
    int n = arr.length;
    miniProd min = arr[0];

    for (int i = 1; i < n; i++) {
      if (arr[i].price < min.price) {
        min = arr[i];
      }
    }
    System.out.println("Prduct With Minimumn price");
    min.displayName();
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    miniProd min[] = new miniProd[5];

    for (int i = 0; i < 5; i++) {
      System.out.println("Enter Size , Price , Name of the Produtc " + (i + 1));
      int id = sc.nextInt();
      int price = sc.nextInt();
      String name = sc.next();

      min[i] = new miniProd(id, price, name);
    }
    minimum(min);
    sc.close();
  }
}
