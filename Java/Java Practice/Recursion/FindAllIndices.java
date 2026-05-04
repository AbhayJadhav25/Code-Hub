import java.util.*;

public class FindAllIndices {
  public static void findAllIndices(int arr[], int idx, int key, List<Integer> result) {
    if (idx == arr.length)
      return;

    if (arr[idx] == key) {
      result.add(idx);
    }
    findAllIndices(arr, idx + 1, key, result);
  }

  public static void main(String[] args) {
    int arr[] = { 3, 2, 4, 5, 6, 2, 7, 2, 2 };
    int key = 2;
    List<Integer> res = new ArrayList<>();
    findAllIndices(arr, 0, key, res);

    for (int idx : res) {
      System.out.print(idx + " ");
    }
  }
}
