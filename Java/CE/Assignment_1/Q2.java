class MyNumber {
  private int no;

  MyNumber() {
    no = 0;
  }

  MyNumber(int no) {
    this.no = no;
  }

  void numberCheck() {
    if (no > 0) {
      System.out.println("Number is positive");
    } else if (no < 0) {
      System.out.println("Number is negative");
    } else {
      System.out.println("Number is Zero");
    }
  }
}

class Q2 {
  public static void main(String args[]) {
    // We have to pass number during runtime
    int no = Integer.parseInt(args[0]);
    System.out.println("Number = " + no);

    MyNumber num = new MyNumber(no);
    num.numberCheck();
  }
}
