//Parameterized Constructor
class Car {

  int speed;
  String brand;

  Car(int speed, String brand) {
    this.speed = speed;
    this.brand = brand;
  }

  void show() {
    System.out.println(brand + " Car running at " + speed + " km/h");
  }
}

public class ConstructorX {
  public static void main(String[] args) {
    Car c = new Car(180, "Kia");
    c.show();
  }
}
