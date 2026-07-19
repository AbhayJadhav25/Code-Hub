import java.util.ArrayList;

public class WithGenerics {
     public static void main(String[] args) {
        ArrayList<String> arr = new ArrayList<>();
        arr.add("Abhay");
        // arr.add(100);  //Error
        // arr.add(true); //Error
        
        arr.add("Samarath");
        System.out.println(arr);
    }
}
