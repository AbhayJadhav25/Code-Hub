public class InternMethod {
  public static void main(String[] args) {
    String str = "Hello";
    String str2 = new String("Hello");
    String str3 = str2.intern();

    System.out.println(str == str3);
    System.out.println(str2 == str3);
  }
}
