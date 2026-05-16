final class Vechicle{
    void start(){
        System.out.println("Vechicle is starting");
    }
}
class Motor extends Vechicle{
    void stop(){
        System.out.println("Motor stop");
    }           //Cannot inherit from final Vechicle
}
public class Demo3 {
    public static void main(String[] args) {
        Vechicle v = new Vechicle();
        v.start();

        Motor m = new Motor();
        m.stop(); //ERROR
    }
}
