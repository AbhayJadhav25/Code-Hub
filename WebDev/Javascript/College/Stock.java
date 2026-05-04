public class Stock {
  public static void main(String[] args) {
    int num[] = { 10, 7, 5, 8, 11, 9 };
    int buy_price = num[0];
    int sell_price = 0;
    int profit = 0;
    for (int i = 1; i < num.length; i++) {
      if (buy_price >= num[i]) {
        buy_price = num[i];
      } else {
        sell_price = num[i] - buy_price;
      }

      if (sell_price > profit) {
        profit = sell_price;
      }
    }

    System.out.println("Profit : " + profit);
  }
}
