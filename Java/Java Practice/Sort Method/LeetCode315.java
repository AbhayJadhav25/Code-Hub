/*Input: nums = [5,2,6,1]
Output: [2,1,1,0]
Explanation:
To the right of 5 there are 2 smaller elements (2 and 1).
To the right of 2 there is only 1 smaller element (1).
To the right of 6 there is 1 smaller element (1).
To the right of 1 there is 0 smaller element.*/

class LeetCode315 {
  static void count(int arr[]) {
    int bucket[] = new int[102];
    for (int num : arr) {
      bucket[num]++;
    }

    for (int i = 1; i < bucket.length; i++) {
      bucket[i] += bucket[i - 1];
    }

    int res[] = new int[arr.length];
    for (int i = 0; i < res.length; i++) {
      if (arr[i] == 0)
        res[i] = 0;
      else
        res[i] = bucket[arr[i] - 1];
    }

    System.out.println("Result Array : ");
    for (int num : res) {
      System.out.print(num + " ");
    }
  }

  public static void main(String[] args) {
    int arr[] = { 8, 1, 2, 2, 3 };
    count(arr);
  }
}