public class SearchInSortedMatrix {
  public static boolean isFound(int arr[][], int key) {
    int row = arr.length;
    int cols = arr[0].length;
    int top = 0;
    int right = cols - 1;
    while (top < row && right < cols) {
      int start = arr[top][right];
      if (key == start) {
        return true;
      } else {
        if (key < start) {
          right--;
        } else {
          top++;
        }
      }
    }
    return false;
  }

  public static void main(String[] args) {
    int arr[][] = { { 10, 20, 30, 40 },
        { 15, 25, 35, 45 },
        { 17, 29, 37, 48 },
        { 32, 33, 39, 50 } };
    int key = 33;

    boolean res = isFound(arr, key);
    System.out.println(res);
  }
}
