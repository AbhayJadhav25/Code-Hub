package numoperation;

public class Armstrong {
  int num;

  public Armstrong(int num) {
    this.num = num;
  }

  public int checkArmstrong() {
    int temp = num;
    int digit = 0;
    int isArmstrong = 0;
    while (temp > 0) {
      digit++;
      temp /= 10;
    }
    temp = num;
    int sum = 0;

    while (temp > 0) {
      int rem = temp % 10;
      sum += Math.pow(rem, digit);
      temp /= 10;
    }

    if (sum == num) {
      isArmstrong = 1;
    }

    return isArmstrong;
  }
}