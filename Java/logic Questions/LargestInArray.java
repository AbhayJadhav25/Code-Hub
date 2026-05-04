public class LargestInArray {
  public static int largestElement(int arr[]) {
    int max = Integer.MIN_VALUE;
    for (int i = 0; i < arr.length; i++) {
      if (arr[i] > max) {
        max = arr[i];
      }
    }
    return max;
  }

  public static void main(String[] args) {
    int arr[] = { 12, 87, 65, 43, 23 };
    int max = largestElement(arr);
    System.out.println("Largest Element : " + max);
  }
}
