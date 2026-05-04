
//Form a beautiful array within a given range
import java.util.*;

class LeetCode932 {

  static int[] solution2(int n) {
    if (n == 1)
      return new int[] { 1 };

    int res[] = new int[] { 1 };
    while (res.length < n) {
      int[] temp = new int[res.length * 2];
      int idx = 0;
      for (int num : res) {
        int val = num * 2 - 1;
        if (val <= n) {
          temp[idx++] = val;
        }
      }

      for (int num : res) {
        int val = 2 * num;
        if (val <= n)
          temp[idx++] = val;
      }

      res = Arrays.copyOf(temp, idx);
    }
    return Arrays.copyOf(res, n);
  }

  public static void main(String[] args) {
    int n = 4;
    int[] arr = solution2(n);
    for (int num : arr) {
      System.out.print(num + " ");
    }
  }
}