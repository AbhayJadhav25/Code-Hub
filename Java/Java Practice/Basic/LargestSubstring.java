public class LargestSubstring {
  public static void largestString(String fruits[]) {
    int n = fruits.length;
    String largest = fruits[0];

    for (int i = 1; i < fruits.length; i++) {
      if (largest.compareTo(fruits[i]) < 0) {
        largest = fruits[i];
      }
    }
    System.out.println("Largest String : " + largest);
  }

  public static void main(String[] args) {
    String fruits[] = { "Apple", "Mango", "Banana" };
    largestString(fruits);
  }
}
