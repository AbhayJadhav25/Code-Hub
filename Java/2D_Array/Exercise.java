public class Exercise {
  public static int Question1(int arr[][], int key) {
    int count = 0;
    int row = arr.length;
    int cols = arr[0].length;
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < cols; j++) {
        if (arr[i][j] == key) {
          count++;
        }
      }
    }
    return count;
  }

  public static int Question2(int arr2[][]) {
    int cols = arr2[0].length;
    int sum = 0;
    int row = 1;
    for (int i = 0; i < cols; i++) {
      sum += arr2[row][i];
    }
    return sum;
  }

  public static void transposeMatrix(int arr[][]) {
    int row = arr.length;
    int cols = arr[0].length;
    int transpose[][] = new int[cols][row];
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < cols; j++) {
        transpose[j][i] = arr[i][j];
      }
    }
    System.out.println("Transpose Matrix : ");
    for (int i = 0; i < transpose.length; i++) {
      for (int j = 0; j < transpose[0].length; j++) {
        System.out.print(transpose[i][j] + " ");
      }
      System.out.println();
    }
  }

  public static void main(String[] args) {
    int arr1[][] = { { 4, 7, 8 }, { 8, 8, 7 } };
    int key = 7;
    int res = Question1(arr1, key);
    System.out.println(res);

    int arr2[][] = { { 1, 4, 9 }, { 11, 4, 3 }, { 2, 2, 3 } };
    int sum = Question2(arr2);
    System.out.println("Sum : " + sum);

    int arr3[][] = { { 1, 4, 9 }, { 2, 2, 2 } };
    transposeMatrix(arr3);
  }
}
