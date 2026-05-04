import java.util.Scanner;
abstract class shape{
    abstract void calc_area();
    abstract void calc_volume();
}
class Sphere extends shape{
    double radius;

    Sphere(double radius){
        this.radius = radius;
    }

    void calc_area(){
        System.out.println("Area of Sphere =  "+(4*3.14*radius*radius));
    }

    void calc_volume(){
        System.out.println("Volume of sphere = "+((4/3)*3.14*radius*radius*radius));
    }
}
class Cone extends shape{
    double radius , height;

    Cone(double radius , double height){
        this.radius = radius;
        this.height = height;
    }

    void calc_area(){
        System.out.println("Area of Cone = "+(3.14*radius*(height+radius)));
    }
    void calc_volume(){
        System.out.println("Volume of cone =  "+(1/3)*3.14*radius*radius*height);
    }
}
class Cylinder extends shape{
    double radius , height;

    Cylinder(double radius , double height){
        this.radius = radius;
        this.height = height;
    }

    void calc_area(){
        System.out.println("Area of Cylinder =  "+(2*3.14*(height+radius)));
    }
    void calc_volume(){
        System.out.println("Volume of Cylinder  = "+(3.14*radius*radius*height));
    }
}
class Box extends shape{
    double length , breadth , height ;
    Box(double length , double breadth , double height){
        this.length = length;
        this.breadth = breadth;
        this.height = height;
    }

    void calc_area(){
        System.out.println("Area of box  =  "+(2*(length*breadth + breadth*height + height*length)));
    }
    void calc_volume(){
        System.out.println("Volume of Box =  "+(length*breadth*height));
    }
}
public class Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Radius of sphere = ");
        double sphere_radius = sc.nextDouble();

        System.out.println("Enter radius and Height of Cone =  ");
        double cone_radius = sc.nextDouble();
        double cone_height = sc.nextDouble();

        System.out.println("Enter Radius and Height of Cylinder = ");
        double cylinder_radius = sc.nextDouble();
        double cylinder_height = sc.nextDouble();

        System.out.println("Enter length , breadth , height of Box = ");
        double length = sc.nextDouble();
        double breadth = sc.nextDouble();
        double height= sc.nextDouble();

        Sphere sp = new Sphere(sphere_radius);
        sp.calc_area();
        sp.calc_volume();

        Cone c = new Cone(cone_radius , cone_height);
        c.calc_area();
        c.calc_volume();

        Cylinder cl = new Cylinder(cylinder_radius, cylinder_height);
        cl.calc_area();
        cl.calc_volume();

        Box b = new Box(length, breadth, height);
        b.calc_area();
        b.calc_volume();
        sc.close();
    }
}
