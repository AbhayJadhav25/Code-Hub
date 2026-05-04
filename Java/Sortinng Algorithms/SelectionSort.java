public class SelectionSort {
  public static void selectionSort(int nums[]) {
    int n = nums.length;
    for (int i = 0; i < n - 1; i++) {
      int small = i;
      for (int j = i + 1; j <= n - 1; j++) { // for(int j=i+1 ; j< n ; j++)
        if (nums[small] > nums[j]) {
          small = j;
        }
      }
      // Swap
      int temp = nums[i];
      nums[i] = nums[small];
      nums[small] = temp;
    }
    System.out.println("Sorted Array : ");
    for (int num : nums) {
      System.out.print(num + " ");
    }
  }

  public static void main(String[] args) {
    int nums[] = { 5, 4, 1, 3, 2 };
    selectionSort(nums);
  }
}
