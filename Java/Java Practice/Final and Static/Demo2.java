class Car{
     final void print(){
        System.out.println("TATA leads the Car industry");
    }
}
class Hundai extends Car{
    @Override
    void print(){
        System.out.println("Hundai leads the car industry");
    }  //--> print() in Hundai cannot override print() in Car
}
public class Demo2 {
    public static void main(String[] args) {
        Hundai h = new Hundai();
        h.print();  //ERROR --> Can't override Final Method
   
    }
}
 