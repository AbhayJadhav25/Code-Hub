import java.util.*;

public class MinimumSwap {
  public static int minSwap(int arr[]) {
    int n = arr.length;
    boolean isVisited[] = new boolean[arr.length + 1];
    HashMap<Integer, Integer> nodeMap = new HashMap<Integer, Integer>();

    for (int i = 1; i < isVisited.length; i++) {
      nodeMap.put(i, arr[i - 1]);
    }
    int countSwap = 0;

    for (int k = 1; k <= nodeMap.size(); k++) {
      int nextNode;

      if (isVisited[k] == false) {
        isVisited[k] = true;

        if (k == nodeMap.get(k)) {
          continue;
        } else {
          int c = nodeMap.get(k);

          while (!isVisited[c]) {
            isVisited[c] = true;
            nextNode = nodeMap.get(c);
            c = nextNode;
            ++countSwap;
          }
        }
      }
    }
    return countSwap;
  }

  public static void main(String[] args) {
    int arr[] = { 10, 19, 6, 3, 5 };
    int swap = minSwap(arr);
    System.out.println("Total Swap : " + swap);
  }
}
