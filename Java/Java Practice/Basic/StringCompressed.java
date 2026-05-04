import java.util.*;

public class StringCompressed {
  public static void strCompressed(String str) {
    StringBuilder sb = new StringBuilder(" ");

    for (int i = 0; i < str.length(); i++) {
      Integer count = 1;
      while (i < str.length() - 1 && str.charAt(i) == str.charAt(i + 1)) {
        count++;
        i++;
      }
      sb.append(str.charAt(i));
      if (count > 1) {
        sb.append(count.toString());
      }
    }
    System.out.println("Decompressed String : " + sb);
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter any string : ");
    String str = sc.next();
    strCompressed(str);
  }
}
