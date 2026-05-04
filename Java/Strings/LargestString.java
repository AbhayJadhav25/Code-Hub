public class LargestString {
  public static void largestString(String[] str) {
    int n = str.length;
    String largest = str[0];

    for (int i = 1; i < n; i++) {
      if (largest.compareTo(str[i]) < 0) {
        largest = str[i];
      }
    }
    System.out.println("Largest String : " + largest);
  }

  public static void main(String[] args) {
    String[] str = { "Apple", "Mango", "Banana" };
    largestString(str);
  }
}
