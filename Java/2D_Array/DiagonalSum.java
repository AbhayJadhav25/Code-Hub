public class DiagonalSum {
  public static int diagonalSum(int arr[][]) {
    int sum = 0;
    int row = arr.length;
    int cols = arr[0].length;
    if (row == cols) {
      for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
          if (i == j || (i + j == row - 1)) {
            sum += arr[i][j];
          }
        }
      }
    }
    return sum;
  }

  public static int optimalSol(int arr[][]) {
    int sum = 0;
    int row = arr.length;
    int cols = arr[0].length;
    for (int i = 0; i < row; i++) {
      sum += arr[i][i];

      if (i != row - 1 - i) {
        sum += arr[i][row - 1 - i];
      }
    }
    return sum;
  }

  public static void main(String[] args) {
    int arr[][] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }, { 13, 14, 15, 16 } };
    // int sum = diagonalSum(arr);
    int sum = optimalSol(arr);
    System.out.println("Sum of Diagonal : " + sum);
  }
}
