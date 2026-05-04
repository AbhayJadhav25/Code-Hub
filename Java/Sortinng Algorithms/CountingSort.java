public class CountingSort {
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
    for (int i = 0; i < n; i++) {
      while (count[i] > 0) {
        nums[j] = i;
        j++;
        count[i]--;
      }
    }
    System.out.println("Sorted array : ");
    for (int num : nums) {
      System.out.print(num + " ");
    }
  }

  public static void main(String[] args) {
    int nums[] = { 1, 4, 1, 3, 2, 4, 3, 7 };
    countSort(nums);
  }
}
