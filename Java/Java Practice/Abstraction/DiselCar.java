public class DiselCar extends Car {
    @Override
    void start(){
        System.out.println("DiselCar Started");
    }
     @Override
    void acclerate(){
        System.out.println("Disel Speed : 90km/h");
    }
}
