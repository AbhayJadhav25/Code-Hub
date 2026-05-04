package utility;

public class CaptialString {
  public String FirstCaptial(String str) {
    char first = Character.toUpperCase(str.charAt(0));
    String rest = str.substring(1);
    return first + rest;
  }
}
