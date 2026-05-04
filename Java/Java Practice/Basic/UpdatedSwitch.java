import java.util.*;

//1 way -> Old method that we know

//2 way-> new one
// public class UpdatedSwitch {
/*
 * public static void main(String[] a) {
 * Scanner sc = new Scanner(System.in);
 * System.out.println("Enter Your choice : ");
 * String choice = sc.next();
 * 
 * switch (choice) {
 * case "Sunday" -> System.out.println("10 am");
 * case "Saturday" -> System.out.println("8 am");
 * case "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" ->
 * System.out.println("6 am");
 * default -> System.out.println("Invalid Choice");
 * }
 * sc.close();
 * }
 */

class UpdatedSwitch {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter Your choice : ");
    String choice = sc.next();
    String res = "";
    res = switch (choice) {
      case "Sunday":
        yield "10 am";
      case "Monday", "Tuesday", "Wednesday", "Thursday", "Friday":
        yield "6 am";
      default:
        yield "Invalid Choice";
    };
    System.out.println(res);
    sc.close();
  }
}
