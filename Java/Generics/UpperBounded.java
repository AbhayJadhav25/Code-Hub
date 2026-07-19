import java.util.List;
public class UpperBounded {
    public static void printNumber(List<? extends Number> list){
        for(Number n: list){
            System.out.println(n);
        }
    }
    public static void main(String[] args) {
        List<Integer> arr= List.of(1,2,3);
        printNumber(arr);
    }
}
