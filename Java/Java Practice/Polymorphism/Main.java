public class Main {
    public static void main(String args[]){
        // Animal a = new  Cat();   
        // a.display();

        // Dog d = new Dog();
        // d.display();

        Cat c = new Cat();
        sounds(c);   //upcasting
    }

    public static void sounds(Animal a){
        a.display();

        Dog dg = new Dog(); //downcasting
        dg.display();
    }
}
