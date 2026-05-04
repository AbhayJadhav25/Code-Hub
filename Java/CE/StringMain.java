import utility.CaptialString;

public class StringMain {
  public static void main(String[] args) {
    String str = "abhay santosh jadhav";
    CaptialString c = new CaptialString();
    String ans = c.FirstCaptial(str);
    System.out.println(ans);
  }
}
