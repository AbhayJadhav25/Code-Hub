public class Stringbuffer {
  public static void main(String[] args) {
    StringBuffer sb = new StringBuffer(5);
    System.out.println(sb.capacity());// 5 , if we not initialize 5 so initial capacity is 16.

    sb.append("Hello Java");
    System.out.println(sb);
    System.out.println(sb.capacity()); // 12 --> 5*2+2(formula of increasing the initial)

    StringBuffer sb1 = new StringBuffer(); // Capacity 16 which is initial.
    sb1.append("Hello000000000000");
    System.out.println(sb1);
    System.out.println(sb1.capacity()); // capacity is 34 , b'coz we add more than 16 characters
  }
}
