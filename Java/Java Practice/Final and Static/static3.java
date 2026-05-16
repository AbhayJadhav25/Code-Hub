class car{
    static class inside{
        static void start(){
            System.out.println("Car start");
        }
    }
    

    void start(){
        System.out.println("Outside car start");
    }
}

public class static3 {
    public static void main(String[] args) {
        car c = new car();
        c.start();

        // car.inside i = new car.inside(); //valid
        car.inside.start();  //valid
    }
}
