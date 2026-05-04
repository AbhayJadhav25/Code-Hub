class BubbleSort {
  public static void bubbleSort(int nums[]) {
    int n = nums.length;
    int swap = 0;
    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j <= n - 2; j++) { // we can also use for(int j=0 ; j< n-1-i ; j++)
        if (nums[j] > nums[j + 1]) {
          int temp = nums[j];
          nums[j] = nums[j + 1];
          nums[j + 1] = temp;
        }
      }
    }
    for (int num : nums) {
      System.out.print(num + " ");
    }
  }

  // public static void printArr(int nums[]) {
  // for (int i = 0; i < nums.length; i++) {
  // System.out.print(nums[i] + " ");
  // }
  // }

  public static void main(String[] args) {
    int nums[] = { 5, 4, 1, 3, 2 };
    int nums1[] = { 71, 65, 50, 421, 21 };
    int num2[] = { 1, 2, 3, 4, 5 };
    bubbleSort(nums1);
    // printArr(nums);
  }
}