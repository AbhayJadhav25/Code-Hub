public class Demo_4 {
    public static void main(String[] args) {
        Car c = new Car();
        c.drive();
        Vechicle.Break();
    }
}
interface Vechicle{
    default void drive(){
        System.out.println("Vechicle is runnning.");
        Start();
    }    //Possible

    static void Break(){
        System.out.println("Vechicle Break");
    }       //Possible but can't override

    private void Start(){
        System.out.println("Vechicle Start");
    }
}
class Car implements Vechicle{
    

//     @Override
//     void Break(){
//         System.out.println("Can't overrode"); //can't override static method
//     }
}