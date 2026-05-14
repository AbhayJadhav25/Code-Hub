interface car{
    void start();
    void acclerate();
    void stop();
} 
interface vechicle{
    void start();
    void acclerate();
    void stop();
}
class ElectricCars implements car , vechicle{
    @Override
    public void start(){
        System.out.println("Electric Car Start");
    }

    @Override
    public void acclerate(){
        System.out.println("Electric Speed : 70km/h");
    }

    @Override
    public void stop(){
        System.out.println("Stop the Electric car");
    }
}

class DiselCars implements car{
    @Override
    public void start(){
        System.out.println("Disel Car Start");
    }

    @Override
    public void acclerate(){
        System.out.println("Disel Speed : 70km/h");
    }

    @Override
    public void stop(){
        System.out.println("Stop the Disel car");
    }
}
public class interfaces1 {
    public static void main(String[] args) {
        DiselCars d = new DiselCars();
        d.start();
        d.acclerate();
        d.stop();
    }
    
}
