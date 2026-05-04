class Car {
  String brand;
  String color;
  int speed;

  Car(String b, String c, int s) {
    brand = b;
    color = c;
    speed = s;
  }

  Car(Car obj) {
    brand = obj.brand;
    color = obj.color;
    speed = obj.speed;
  }

  void show() {
    System.out.println(brand + "(" + color + ")" + speed);
  }
}

public class ConstructorCopy {
  public static void main(String[] args) {
    Car toyota = new Car("Toyota", "Red", 100);
    toyota.show();
  }
}
