public class BinarySearch {
  public static int binarySearch(int arr[], int key) {
    int low = 0;
    int high = arr.length - 1;

    while (low <= high) {
      int mid = (low + high) / 2;
      if (arr[mid] == key) {
        return mid;
      } else if (arr[mid] < key) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
    return -1;
  }

  public static void main(String[] args) {
    int arr[] = { 13, 16, 87, 98, 108 };
    int key = 98;
    int pos = binarySearch(arr, key);

    if (pos == -1) {
      System.out.println("Not Found");
    } else {
      System.out.println("Value found at " + (pos + 1) + " position");
    }
  }
}
