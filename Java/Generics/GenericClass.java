class Box<T>{
    T value;

    void setValue(T value){
        this.value = value;
    }

    T getValue(){
        return value;
    }
}
public class GenericClass {
    public static void main(String[] args) {
        Box<Integer> box = new Box<>();
        box.setValue(10);
        System.out.println(box.getValue());
    }
}
