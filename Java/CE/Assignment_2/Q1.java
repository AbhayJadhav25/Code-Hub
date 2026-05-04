import java.io.*;
import numoperation.*;

public class Q1 {
  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    System.out.println("Enter Number = ");
    int num = Integer.parseInt(br.readLine());

    Prime p = new Prime(num);
    int ans = p.checkPrime();

    if (ans == 1) {
      System.out.println("Number is prime");
    } else {
      System.out.println("Number is not prime");
    }

    System.out.println("Enter Number = ");
    num = Integer.parseInt(br.readLine());

    Armstrong a = new Armstrong(num);
    ans = a.checkArmstrong();

    if (ans == 1) {
      System.out.println("Number is Armstrong");
    } else {
      System.out.println("Number is not Armstrong");
    }

    System.out.println("Enter Number = ");
    num = Integer.parseInt(br.readLine());
    Perfect pr = new Perfect(num);
    pr.checkPerfect();

    if (ans == 1) {
      System.out.println("Number is Perfect.");
    } else {
      System.out.println("Number is not Perfect.");
    }
  }
}
