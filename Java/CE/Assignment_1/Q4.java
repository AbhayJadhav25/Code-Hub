import java.util.Scanner;

public class Q4 {
  public static int[][] matrixAddition(int[][] matrix1, int[][] matrix2) {
    int row1 = matrix1.length;
    int col1 = matrix1[0].length;

    int row2 = matrix2.length;
    int col2 = matrix2[0].length;

    int add[][] = new int[row1][col1];

    for (int i = 0; i < row1; i++) {
      for (int j = 0; j < col1; j++) {
        add[i][j] = matrix1[i][j] + matrix2[i][j];
      }
    }

    return add;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter Number of rows and column : ");
    int row1 = sc.nextInt();
    int column1 = sc.nextInt();

    int matrix1[][] = new int[row1][column1];

    System.out.println("Enter Number of rows and column : ");
    int row2 = sc.nextInt();
    int column2 = sc.nextInt();

    int matrix2[][] = new int[row2][column2];

    if ((row1 != row2) || (column1 != column2)) {
      System.out.println("For Matrix addition number of rows and column of both matrix must be same.");
      System.exit(0);
    }
    System.out.println("Enter Value in " + row1 + " * " + column1 + " matrix1");
    for (int i = 0; i < row1; i++) {
      for (int j = 0; j < column1; j++) {
        matrix1[i][j] = sc.nextInt();
      }
    }

    System.out.println("Enter Value in " + row2 + " * " + column2 + " matrix2");
    for (int i = 0; i < row2; i++) {
      for (int j = 0; j < column2; j++) {
        matrix2[i][j] = sc.nextInt();
      }
    }
    int addition[][] = new int[row1][column1];
    addition = matrixAddition(matrix1, matrix2);
    System.out.println("Addition of Matrix:");
    for (int i = 0; i < row2; i++) {
      for (int j = 0; j < column2; j++) {
        System.out.print(addition[i][j] + " ");
      }
      System.out.println();
    }
    sc.close();
  }
}
