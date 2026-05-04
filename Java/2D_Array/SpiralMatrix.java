import java.util.*;

class SpiralMatrix {
  public static int[] spiralMatrix(int arr[][]) {
    int row = arr.length;
    int cols = arr[0].length;

    int left = 0, right = cols - 1;
    int top = 0, bottom = row - 1;
    int index = 0;
    int res[] = new int[row * cols];
    while (left <= right && top <= bottom) {
      for (int i = left; i <= right; i++) {
        res[index++] = arr[top][i];
      }
      top++;
      for (int i = top; i <= bottom; i++) {
        res[index++] = arr[i][right];
      }
      right--;
      // if (left <= right) {
      for (int i = right; i >= left; i--) {
        res[index++] = arr[bottom][i];
      }
      bottom--;
      // }
      // if (top <= bottom) {
      for (int i = bottom; i >= top; i--) {
        res[index++] = arr[i][left];
      }
      left++;
      // }
    }
    return res;
  }

  public static void main(String[] args) {
    int arr[][] = { { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };
    int res[] = spiralMatrix(arr);
    System.out.println("Spiral Order : " + Arrays.toString(res));
  }
}