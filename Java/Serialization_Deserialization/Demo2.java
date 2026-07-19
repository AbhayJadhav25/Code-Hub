//Deserialization
import java.io.FileInputStream;
import java.io.ObjectInput;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;

public class Demo2 {
    public static void main(String[] args) throws Exception {
        FileInputStream file = new FileInputStream("student.txt");
        ObjectInputStream in = new ObjectInputStream(file);

        Student s = (Student) in.readObject();

        System.out.println(s.id);
        System.out.println(s.name);
        System.out.println(s.password);

        in.close();
    }
}
