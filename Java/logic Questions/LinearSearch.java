public class LinearSearch {
  public static int search(int arr[], int key) {
    for (int i = 0; i < arr.length; i++) {
      if (arr[i] == key) {
        return i;
      }
    }
    return -1;
  }

  public static void main(String[] args) {
    int arr[] = { 67, 13, 98, 45, 65 };
    int key = 13;
    int pos = search(arr, key);
    if (pos == -1) {
      System.out.println("Not Found");
    } else {
      System.out.println("Value found at " + (pos + 1) + " position");
    }
  }
}
