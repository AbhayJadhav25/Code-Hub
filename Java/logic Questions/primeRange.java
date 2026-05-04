public class primeRange {
  public static void printPrime(int range) {
    for (int i = 2; i <= range; i++) {
      if (isPrime(i)) {
        System.out.println(i);
      }
    }
  }

  public static boolean isPrime(int num) {
    for (int i = 2; i <= Math.sqrt(num); i++) {
      if (num % i == 0)
        return false;
    }
    return true;
  }

  public static void main(String[] args) {
    int range = 40;
    printPrime(range);
  }
}
