public class ReverseArray {
  public static void reverseArray(int arr[]) {
    int low = 0, high = arr.length - 1;
    while (low <= high) {
      int temp = arr[low];
      arr[low] = arr[high];
      arr[high] = temp;
      low++;
      high--;
    }
  }

  public static void main(String[] args) {
    int arr[] = { 10, 20, 30, 40 };
    reverseArray(arr);
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
  }
}
