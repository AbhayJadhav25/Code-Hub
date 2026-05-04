import java.io.*;

public class PrimeNumber {
  public static int isPrime(int num) {
    int flag = 1;
    for (int i = 2; i <= num / 2; i++) {
      if (num % i == 0) {
        flag = 0;
      }
    }
    return flag;
  }

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    System.out.println("Enter Range : ");
    int n = Integer.parseInt(br.readLine());

    for (int i = 2; i <= n; i++) {
      int prime = isPrime(i);
      if (prime == 1) {
        System.out.print(i + " ");
      }
    }
    br.close();
  }
}
