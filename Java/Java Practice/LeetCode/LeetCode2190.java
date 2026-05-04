
//Most frequent Number means a number which is occure just after the key .
import java.util.*;

public class LeetCode2190 {
  static int mostFrequent(int nums[], int key) {
    int n = nums.length;
    HashMap<Integer, Integer> map = new HashMap<>();

    for (int i = 0; i < n - 1; i++) {
      map.put(nums[i + 1], map.getOrDefault(nums[i + 1], 0) + 1);
    }
    int max = Integer.MIN_VALUE, ans = 0;
    for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
      int val = entry.getValue();
      int Key = entry.getKey();
      if (val > max) {
        max = val;
        ans = Key;
      }
    }
    return ans;
  }

  public static void main(String[] args) {
    int nums[] = { 1, 100, 200, 1, 100 };
    int ans = mostFrequent(nums, 2);
    System.out.println(ans);
  }
}
