class point {
  int x_coor, y_coor;

  point() {
    x_coor = 0;
    y_coor = 0;
  }

  point(int x_coor, int y_coor) {
    this.x_coor = x_coor;
    this.y_coor = y_coor;
  }

  void display() {
    System.out.println("X coordinates = " + x_coor);
    System.out.println("Y coordinates = " + y_coor);
  }
}

class ColorPoint extends point {
  String color;

  ColorPoint(int x, int y, String color) {
    super(x, y);
    this.color = color;
  }

  void display() {
    super.display();
    System.out.println("Color : " + color);
  }
}

class Point3D extends point {
  int z;

  Point3D(int x, int y, int z) {
    super(x, y);
    this.z = z;
  }

  void display() {
    super.display();
    System.out.println("Z coordinates = " + z);
  }
}

public class Coordinates {
  public static void main(String[] args) {
    System.out.println("Simple Point : ");
    point p = new point(2, 3);
    p.display();

    System.out.println("Colour Point : ");
    ColorPoint cp = new ColorPoint(4, 5, "Red");
    cp.display();

    System.out.println("3D point : ");
    Point3D p3 = new Point3D(6, 7, 8);
    p3.display();
  }
}
