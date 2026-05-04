import java.util.*;

public class ArrayOpr {

  public static void sum_sort(int arr[]) {
    int n = arr.length;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
          int temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
    }

    System.out.println("Sum of All elements = " + sum);

    System.out.println("Sorted Data : ");
    for (int i = 0; i < n; i++) {
      System.out.print(arr[i] + " ");
    }
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter size of Array :");
    int n = sc.nextInt();

    int arr[] = new int[n];

    for (int i = 0; i < n; i++) {
      arr[i] = sc.nextInt();
    }

    sum_sort(arr);

    sc.close();
  }
}
