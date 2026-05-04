package armstrong;

public class Armstrong {
  int num;

  public void isArmstrong(int num) {
    int temp = num;
    int cnt = 0;
    int sum = 0;
    while (temp > 0) {
      int rem = num % 10;
      temp /= 10;
      cnt++;
    }
    temp = num;
    while (num > 0) {
      int rem = num % 10;
      sum += Math.pow(rem, cnt);
      num /= 0;
    }
    if (temp == sum) {
      System.out.println(temp + " is a armstrong number.");
    } else {
      System.out.println(temp + " is  not a armstrong number.");
    }
  }
}
