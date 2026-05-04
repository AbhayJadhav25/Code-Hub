import java.util.Arrays;
import java.util.Collections;

public class inBuiltSort {
  public static void main(String[] args) {
    int nums[] = { 5, 7, 4, 1, 3, 2 };
    Integer nums1[] = { 5, 7, 4, 1, 3, 2 };
    // Arrays.sort(nums); => ascending order
    // Arrays.sort(nums1, Collections.reverseOrder()); => Descending order

    Arrays.sort(nums, 0, 4);
    for (int num : nums) {
      System.out.print(num + " ");
    }
  }
}
