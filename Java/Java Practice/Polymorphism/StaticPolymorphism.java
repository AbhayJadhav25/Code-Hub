public class StaticPolymorphism {
    public static void main(String[] args) {
        Calculation c = new Calculation();

        System.out.println(c.add(20.4 , 30.5));
        System.out.println(c.add(10,20,30));
    }
}
