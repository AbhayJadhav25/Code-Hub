//Serialization
import java.io.FileOutputStream;
import java.io.ObjectOutputStream;

public class Demo1 {
    public static void main(String[] args) throws Exception {
        Student s = new Student(10,"Abhay", "X123Xc");
        FileOutputStream file = new FileOutputStream("student.txt");
        ObjectOutputStream out = new ObjectOutputStream(file);

        out.writeObject(s);

        out.close();

        System.out.println("serializable Successful");

    }
}
