package numoperation;

public class Package1 {
  int num;

  public void prime(int num) {
    boolean isPrime = true;
    for (int i = 2; i <= Math.sqrt(num); i++) {
      if (num % i == 0)
        isPrime = false;
    }

    if (isPrime) {
      System.out.println(num + "is a prime number");
    } else {
      System.out.println(num + " is not a prime number");
    }
  }
}
