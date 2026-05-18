public class Demo_3 {
    public static void main(String[] args) {
        StreetDog sd = new StreetDog();
        sd.eat();
        sd.bark();
    }
}
interface Animal{
    void eat();
}

interface Dog extends Animal{
    void bark();
}

class StreetDog implements Dog{
    @Override
    public void eat(){
        System.out.println("Dog can eat");
    }
    @Override
    public void bark(){
        System.out.println("Dog can brak");
    }
}


//we must have to implement all methods of both interfaces. 