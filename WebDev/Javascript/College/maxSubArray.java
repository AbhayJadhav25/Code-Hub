public class maxSubArray {
  public static int solution(int arr[]) {
    int maxSum = arr[0], currSum = arr[0];

    for (int i = 1; i < arr.length; i++) {
      currSum += arr[i];

      if (currSum > maxSum) {
        maxSum = currSum;
      }

      if (currSum < 0) {
        currSum = 0;
      }
    }
    return maxSum;
  }

  public static void main(String[] args) {
    int arr[] = { 0, -3, 5, -2, 0, 3 };
    int ans = solution(arr);
    System.out.println("Answer : " + ans);
  }
}
