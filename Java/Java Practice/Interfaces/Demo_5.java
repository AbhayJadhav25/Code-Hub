
interface A{
    default void fun(){
        System.out.println("Inside interface A");
    }
}
class B{
    public void fun(){
        System.out.println("Inside class B");
    }
}   //This will be run first

class C extends B implements A{

}
public class Demo_5 {
    public static void main(String[] args) {
        C c = new C();
        c.fun();
    }
}
