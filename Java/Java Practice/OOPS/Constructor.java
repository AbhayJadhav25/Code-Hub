class Construct {
  int rno;
  String name;

  Construct() {
    rno = 21;
    name = "Aditya";
  }

  void show() {
    System.out.println("Hello " + name + ", your roll no is  " + rno);
  }
}

public class Constructor {
  public static void main(String[] args) {
    Construct c = new Construct();
    c.show();
  }
}
