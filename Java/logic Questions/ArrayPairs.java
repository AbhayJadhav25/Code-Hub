public class ArrayPairs {
  public static void arrayPairs(int arr[]) {
    int totalPairs = 0;
    for (int i = 0; i < arr.length - 1; i++) {
      for (int j = i + 1; j < arr.length; j++) {
        System.out.print("(" + arr[i] + "," + arr[j] + ")");
        totalPairs++;
      }
      System.out.println();
    }
    System.out.println("Total Pairs : " + totalPairs);
  }

  public static void main(String[] args) {
    int arr[] = { 2, 3, 4, 5, 6 };
    arrayPairs(arr);
  }
}
