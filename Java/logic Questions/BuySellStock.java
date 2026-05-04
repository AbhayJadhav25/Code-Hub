public class BuySellStock {
  public static int profit(int arr[]) {
    int n = arr.length;
    int totalProfit = 0, currProfit = 0;
    int buy = arr[0];
    for (int i = 1; i < n; i++) {
      if (arr[i] < buy) {
        buy = arr[i];
      } else {
        currProfit = arr[i] - buy;
      }
      totalProfit = Math.max(totalProfit, currProfit);
    }
    return totalProfit;
  }

  public static void main(String[] args) {
    int arr[] = { 7, 1, 5, 3, 6, 4 };
    System.out.println("Max Profit : " + profit(arr));
  }
}
