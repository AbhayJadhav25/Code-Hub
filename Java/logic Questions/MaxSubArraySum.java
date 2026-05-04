public class MaxSubArraySum {
  public static int maxSum(int arr[]) {
    int n = arr.length;
    int maxSum = Integer.MIN_VALUE;
    int currSum = 0;
    int prefixSum[] = new int[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++) {
      prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        currSum = 0;
        // for (int k = i; k <= j; k++) {
        // currSum += arr[k];
        //
        // }
        currSum = i == 0 ? prefixSum[j] : prefixSum[j] - prefixSum[i - 1];
        if (currSum > maxSum) {
          maxSum = currSum;
        }
      }
    }
    return maxSum;
  }

  public static int kandanesAlgo(int arr[]) {
    int maxSum = Integer.MIN_VALUE;
    int currSum = 0;
    for (int i = 0; i < arr.length; i++) {
      currSum += arr[i];
      if (currSum < 0) {
        currSum = 0;
      }
      maxSum = Math.max(currSum, maxSum);
      if (maxSum == 0) {
        int max = arr[0];
        for (int k = 0; i < arr.length; i++) {
          max = Math.max(max, arr[i]);
          maxSum = max;
        }
      }
    }
    return maxSum;
  }

  public static void main(String[] args) {
    int arr[] = { 1, -2, 6, -1, 3 };
    int arr2[] = { -1, -3, -13, -8 };
    int arr3[] = { 0, 0, 0 };
    // int sum = maxSum(arr);
    int sum = kandanesAlgo(arr3);
    System.out.println("Sum = " + sum);
  }
}
