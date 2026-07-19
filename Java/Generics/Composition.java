class Engine{
    public void start(){
        System.out.println("Engine start");
    }

    public void stop(){
        System.out.println("Engine Stop");
    }
}

class Car{
    private Engine engine;

    Car(){
        this.engine = new Engine();
    }

    public void startVechicle(){
        engine.start();
        System.out.println("Vechicle Start");
    }

    public void stopVechicle(){
        engine.stop();
        System.out.println("Vechicle Stop");
    }
}
public class Composition {
    public static void main(String[] args) {
        Car c = new Car();
        c.startVechicle();
        c.stopVechicle();
    }
}
