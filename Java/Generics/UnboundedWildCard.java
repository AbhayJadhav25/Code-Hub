import java.util.List;

public class UnboundedWildCard {
    public static void printList(List<?> list){
        for(Object obj : list){
            System.out.println(obj);
        }
    }
    public static void main(String[] args) {
        List<Integer> arr = List.of(1,2,3);
        List<String> str = List.of("Abhay","Sammy");

        printList(arr);
        printList(str);
    }
}
