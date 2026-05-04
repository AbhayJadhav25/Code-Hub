import java.util.*;

public class ShortestPath {
  public static int shortestPath(String dir) {
    int x = 0, y = 0;
    for (int i = 0; i < dir.length(); i++) {
      char direction = dir.charAt(i);
      if (direction == 'W') {
        x -= 1;
      } else if (direction == 'E') {
        x += 1;
      } else if (direction == 'N') {
        y += 1;
      } else {
        y -= 1;
      }
    }
    int res = (int) Math.sqrt(((x - 0) * (x - 0)) + ((y - 0) * (y - 0)));
    return res;
  }

  public static void checkEqual(String s1, String s2) {
    // if (s1 == s2) {
    // System.out.println("Strings are same");
    // } else {
    // System.out.println("Strings are not same");
    // }

    if (s1.equals(s2)) {
      System.out.println("Strings are same");
    } else {
      System.out.println("Not same");
    }
  }

  public static void main(String[] args) {
    String path = "WNEENESENNN";
    int res = shortestPath(path);
    System.out.println(res);

    String s1 = "Abhay";
    String s2 = "Abhay";
    String s3 = new String("Abhay");
    checkEqual(s1, s2);
    checkEqual(s1, s3);

    String str = "HelloWorld";
    System.out.println(str.substring(0, 5));
  }
}
