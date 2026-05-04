import java.util.zip.ZipEntry;

public class Exercise {
  public static void bubbleSort(int nums[]) {
    int n = nums.length;
    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - 1 - i; j++) {
        if (nums[j] < nums[j + 1]) {
          int temp = nums[j];
          nums[j] = nums[j + 1];
          nums[j + 1] = temp;
        }
      }
    }
  }

  public static void selectionSort(int nums[]) {
    int n = nums.length;
    for (int i = 0; i < n - 1; i++) {
      int large = i;
      for (int j = i + 1; j < n; j++) {
        if (nums[large] < nums[j]) {
          large = j;
        }
      }
      int temp = nums[i];
      nums[i] = nums[large];
      nums[large] = temp;
    }
  }

  public static void insertSort(int nums[]) {
    int n = nums.length;
    for (int i = 1; i < n; i++) {
      int curr = nums[i];
      int prev = i - 1;
      while (prev >= 0 && nums[prev] < curr) {
        nums[prev + 1] = nums[prev];
        prev--;
      }
      nums[prev + 1] = curr;
    }
  }

  public static void countSort(int nums[]) {
    int n = nums.length;
    int largest = Integer.MIN_VALUE;
    for (int i = 0; i < n; i++) {
      largest = Math.max(largest, nums[i]);
    }

    int count[] = new int[largest + 1];

    for (int i = 0; i < n; i++) {
      count[nums[i]]++;
    }
    int j = 0;
    for (int i = largest; i >= 0; i--) { // loop from largest → smallest
      while (count[i] > 0) {
        nums[j] = i;
        j++;
        count[i]--;
      }
    }
  }

  public static void printArr(int nums[]) {
    for (int num : nums) {
      System.out.print(num + " ");
    }
    System.out.println();
  }

  public static void main(String[] args) {
    int nums[] = { 5, 4, 7, 1, 3, 2, 8 };
    System.out.println("Bubble Sort in Descending Order : ");
    bubbleSort(nums);
    printArr(nums);

    int nums2[] = nums.clone();
    System.out.println("Selection Sort In descending order : ");
    selectionSort(nums2);
    printArr(nums2);

    int nums3[] = nums.clone();
    System.out.println("Insertion Sort in Descending order : ");
    insertSort(nums3);
    printArr(nums3);

    int nums4[] = nums.clone();
    System.err.println("Counting sort in descending order : ");
    countSort(nums4);
    printArr(nums4);
  }
}
