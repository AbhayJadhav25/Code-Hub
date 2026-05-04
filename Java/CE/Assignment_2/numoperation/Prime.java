package numoperation;

public class Prime {
  public int no;

  public Prime(int no) {
    this.no = no;
  }

  public int checkPrime() {
    int isPrime = 1;
    for (int i = 2; i <= Math.sqrt(no); i++) {
      if (no % i == 0) {
        isPrime = 0;
        break;
      }
    }
    return isPrime;
  }
}