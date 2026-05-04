public class checkPrime {
  public static boolean isPrime(int num) {
    if (num == 2)
      return true;

    for (int i = 2; i <= Math.sqrt(num); i++) {
      if (num % i == 0)
        return false;
    }
    return true;
  }

  public static void main(String[] args) {
    int num = 7;
    if (isPrime(num)) {
      System.out.println(num + " is a prime number");
    } else {
      System.out.println(num + " is not a prime number");
    }
  }
}
