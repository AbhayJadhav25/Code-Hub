import java.util.*;

public class Anagrams {
  public static boolean stringAnagram(String str1, String str2) {

    int n1 = str1.length();
    int n2 = str2.length();

    if (n1 != n2)
      return false;

    char[] str1Array = str1.toCharArray();
    char[] str2Array = str2.toCharArray();

    Arrays.sort(str1Array);
    Arrays.sort(str2Array);

    return Arrays.equals(str1Array, str2Array);
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter Any two String : ");
    String s1 = sc.next();
    String s2 = sc.next();

    boolean isAnagram = stringAnagram(s1, s2);
    if (isAnagram) {
      System.out.println("Strings are Anagrams");
    } else {
      System.out.println("Strings are not Anagrams");
    }
  }
}
