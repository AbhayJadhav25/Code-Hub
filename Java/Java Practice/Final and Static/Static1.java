class Student{
    String name ;
    String clgName;

    Student(String name , String clg){
        this.name = name;
        clgName = clg;
    }

    void display(){
        System.out.println(name+"  "+clgName);
    }
}
public class Static1 {
    public static void main(String[] args) {
        Student s1 = new Student("Abhay","Fergusson");
        Student s2 = new Student("Aditya","Wadiya");

        s1.display();
        s2.display();
    }
}
