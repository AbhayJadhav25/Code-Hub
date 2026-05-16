class Student{
    String name ;
    static String clgName;

    // Student(String name , String clg){
    //     this.name = name;
    //     clgName = clg;
    // }

    void display(){
        System.out.println(name+"  "+clgName);
    }

    Student(String name){
        this.name = name;
    }
    static{
        clgName = "Modern";
    }
}
public class Static2 {
    public static void main(String[] args) {
        // Student s1 = new Student("Abhay","Fergusson");
        // Student s2 = new Student("Aditya","Wadiya");

        // s1.display();  //here clgName also Wadiya.
        // s2.display();

        // Student.clgName = "Fergusson";
        // s1.display();  //here clgName becomes Fergusson
        // s2.display();   //here clgName becomes Fergusson

        Student s1 = new Student("Abhay");
        Student s2 = new Student("Aditya");

        s1.display();
        s2.display();


    }
}
