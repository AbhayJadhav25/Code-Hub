public class Sort {
  public static void bubbleSort(int arr[]) {
    int n = arr.length;
    for (int i = 0; i < n - 1; i++) {
      boolean flag = true;
      for (int j = 0; j < n - 1 - i; j++) {
        if (arr[j] > arr[j + 1]) {
          int temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
          flag = false;
        }
      }
      if (flag) {
        break;
      }
    }
    System.out.println("Bubble Sorted : ");
    for (int i = 0; i < n; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println();
  }

  public static void selectionSort(int arr[]) {
    int n = arr.length;
    for (int i = 0; i < n - 1; i++) {
      int min = i;
      for (int j = i + 1; j < n; j++) {
        if (arr[j] < arr[min]) {
          min = j;
        }
      }
      int temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
    }
    System.out.println("Selection Sorted : ");
    for (int i = 0; i < n; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println();
  }

  public static void insertionSort(int arr[]) {
    int n = arr.length;
    for (int i = 1; i < n; i++) {
      for (int j = i; j < n; j++) {
        while (j > 0 && arr[j - 1] > arr[j]) {
          int temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
          j--;
        }
      }
    }
    System.out.println("Insertion Sorted : ");
    for (int i = 0; i < n; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println();
  }

  public static void main(String[] args) {
    int arr[] = { 34, 65, 11, 23, 90, 76 };
    bubbleSort(arr);
    selectionSort(arr);
    insertionSort(arr);
  }
}
