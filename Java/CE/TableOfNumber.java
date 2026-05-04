import java.io.*;

class TableOfNumber {
  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    System.out.println("Enter a Number : ");
    int no = Integer.parseInt(br.readLine());

    for (int i = 1; i <= 10; i++) {
      System.out.println(no * i);
    }
  }
}