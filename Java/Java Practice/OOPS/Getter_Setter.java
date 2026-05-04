
class Bank {
  private int accNo = 1234;
  String userName;
  String branch;
  private int accBal;

  public String getName() {
    return userName;
  }

  public void setName(String userName) {
    this.userName = userName;
  }

  public int getBal() {
    return accBal;
  }

  public void setBal(int accBal) {
    this.accBal = accBal;
  }
}

public class Getter_Setter {
  public static void main(String[] args) {
    Bank b = new Bank();
    // System.out.println(b.userName);
    // System.out.println(s.accBal); //error: cannot find symbol -> for these
    // purpose we need Getter and setter method

    b.setName("Aditya");
    b.getName();

    System.out.println(b.getName());

    System.out.println(b.getBal());

    b.setBal(13005);
    System.out.println(b.getBal());
  }
}
