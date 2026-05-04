import java.util.HashSet;

public class Q1 {
  public static boolean check(int arr[]) {
    int n = arr.length;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        if (arr[i] == arr[j]) {
          return true;
        }
      }
    }
    return false;
  }

  public static boolean check2(int arr[]) {
    HashSet<Integer> h1 = new HashSet<>();
    for (int i = 0; i < arr.length; i++) {
      if (h1.contains(arr[i])) {
        return true;
      } else {
        h1.add(arr[i]);
      }
    }
    return false;
  }

  public static void main(String[] args) {
    int nums[] = { 1, 2, 3, 1 };
    int nums2[] = { 1, 2, 3, 4 };
    int nums3[] = { 1, 1, 1, 3, 3, 4, 2, 4, 2 };
    boolean ans = check2(nums);
    System.out.println(ans);
    System.out.println(check2(nums2));
    System.out.println(check2(nums3));
  }
}
