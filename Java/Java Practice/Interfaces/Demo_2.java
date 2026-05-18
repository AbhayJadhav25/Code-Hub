public class Demo_2 {
    public static void main(String[] args) {
        BlackThar b = new BlackThar();
        b.drive();
    }
}

interface Car {
    void drive();
}

abstract class Thar implements Car{
    //  public void drive(){
    //     System.out.println("Thar car Run"); //possible
    //  }

    abstract public void drive();
}

class BlackThar extends Thar{
    public void drive(){
        System.out.println("Black Thar Running");  //possible
    }
} 