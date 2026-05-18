interface A{
    void fun();
}
interface B extends A{
    // void fun();
    default void fun(){
        System.out.println("Display B");
    }
}
interface C extends A{
    void fun();
}
class  D implements B , C{
    // @Override
    // public void fun(){
    //     System.out.println("Display D");
    // }

    public void fun(){
        B.super.fun();
    }
}
public class MultipleInherit {
    public static void main(String[] args) {
        D d = new D();
        d.fun();
    }
}
