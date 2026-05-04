import java.util.Arrays;

public class practice {
  public static void countLowerCase(String str) {
    int n = str.length();
    int count = 0;
    for (int i = 0; i < n; i++) {
      if (str.charAt(i) >= 'a' && str.charAt(i) <= 'z') {
        count++;
      }
    }
    System.out.println("Total LowerCase : " + count);
  }

  public static void replacement(String str) {
    // System.out.println(str.replace('l', 'p'));
    System.out.println(str.replaceAll("Cats", "Dogs"));
  }

  public static boolean anagrams(String str1, String str2) {
    if (str1.length() != str2.length()) {
      return false;
    }
    char[] str1Array = str1.toCharArray();
    char[] str2Array = str2.toCharArray();

    Arrays.sort(str1Array);
    Arrays.sort(str2Array);

    return Arrays.equals(str1Array, str2Array);
  }

  public static void main(String[] args) {
    String str1 = "Abhay Jadhav";
    countLowerCase(str1);

    String str = "Hello";
    // replacement(str);

    String str2 = "I love Cats . Cats are lovely.";
    replacement(str2);

    String anagrams1 = "race";
    String anagrams2 = "care";
    boolean res = anagrams(anagrams1, anagrams2);
    System.out.println(res);

  }
}
