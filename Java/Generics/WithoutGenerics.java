import java.util.ArrayList;
class WithoutGenerics{
    public static void main(String[] args) {
        ArrayList arr = new ArrayList();
        arr.add("Abhay");
        arr.add(100);
        arr.add(true);

        System.out.println(arr);
    }
}