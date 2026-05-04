import java.util.*;

public class SortedAccount {
  static class Account {
    int accNum, balance;
    String name;

    Account(int accNum, int balance, String name) {
      this.accNum = accNum;
      this.balance = balance;
      this.name = name;
    }

    void display() {
      System.out.println(accNum + "  " + name + "  " + balance);
    }
  }

  public static void SortAccount(Account arr[]) {
    int n = arr.length;
    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - i - 1; j++) {
        if (arr[j].balance > arr[j + 1].balance) {
          Account temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
    }
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("How many Accounts : ");
    int n = sc.nextInt();

    Account ac[] = new Account[n];
    for (int i = 0; i < n; i++) {
      System.out.println("Enter Details for account " + (i + 1));

      System.out.println("Enter Account Number = ");
      int accNum = sc.nextInt();

      System.out.println("Enter Account balance = ");
      int balance = sc.nextInt();

      System.out.println("Enter Account Holder Name = ");
      String name = sc.next();

      ac[i] = new Account(accNum, balance, name);
    }

    SortAccount(ac);

    System.out.println("Account Details : ");
    for (int i = 0; i < n; i++) {
      ac[i].display();
    }
    sc.close();
  }
}
