public class StringOperation {
  public static void main(String[] args) {
    String s1 = "Abhay";
    String s2 = "Abhay";
    String s3 = new String("Abhay");

    System.out.println(s1 == s2);
    System.out.println(s1 == s3);
    System.out.println(s1.equals(s3));

    String s4 = "HelloWorld";
    System.out.println(s4.substring(0, 5));

    System.out.println(s1.concat("Jadhav"));
    System.out.println(s1);

    Integer a = 10;
    System.out.println(a.toString());
    System.out.println(a);

    // String Builder
    StringBuilder sb = new StringBuilder("Fc Clg");
    System.out.println(sb);

    sb.append("Pune");
    System.out.println(sb);

    // replace()
    String opr = "Hello World Hello";
    System.out.println(opr.replace('l', 'a'));

    System.out.println(opr.replaceAll("Hello", "Bye"));

    System.out.println(opr.replaceFirst("Hello", "Bye"));

    // intern()

    /*
     * String s1 = "Abhay";
     * String s3 = new String("Abhay");
     */

    String s5 = s3.intern();
    System.out.println(s3 == s5); // False
    System.out.println(s1 == s5); // True
  }
}
