public class mergeTwoSorted {
  public static void main(String[] args) {
    int nums1[] = { 1, 2, 3 };
    int nums2[] = { 4, 5, 6 };
    int nums3[] = new int[nums1.length + nums2.length];
    int i = nums1.length - 1;
    int j = nums2.length - 1;
    int k = nums3.length - 1;

    while (i >= 0 && j >= 0) {
      if (nums1[i] > nums2[j]) {
        nums3[k--] = nums1[i--];
      } else {
        nums3[k--] = nums2[j--];
      }
    }

    while (i >= 0) {
      nums3[k--] = nums1[i--];
    }

    while (j >= 0) {
      nums2[k--] = nums2[j--];
    }
    for (i = 0; i < nums3.length; i++) {
      System.out.print(nums3[i] + " ");
    }
  }
}
