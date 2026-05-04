public class BufferString {
  public static void main(String[] args) {
    StringBuffer sb = new StringBuffer(5);
    System.out.println(sb.capacity()); // 5

    sb.append("Hello Moto");
    System.out.println(sb);
    System.out.println(sb.capacity()); // 12
  }
}
