package numoperation;

public class Perfect {
  int num;

  public Perfect(int num) {
    this.num = num;
  }

  public int checkPerfect() {
    int isPerfect = 0;
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
      if (num % i == 0) {
        sum += i;
      }
    }
    if (sum == num) {
      isPerfect = 1;
    }
    return isPerfect;
  }
}