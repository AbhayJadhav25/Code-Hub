public class InsertionSort {
  public static void insertSort(int nums[]) {
    int n = nums.length;
    for (int i = 1; i < n; i++) {
      int curr = nums[i];
      int prev = i - 1;

      while (prev >= 0 && nums[prev] > curr) {
        nums[prev + 1] = nums[prev];
        prev--;
      }
      nums[prev + 1] = curr;
    }
    for (int num : nums) {
      System.out.print(num + " ");
    }
  }

  public static void main(String[] args) {
    int nums[] = { 5, 4, 1, 3, 2 };
    insertSort(nums);
  }
}
