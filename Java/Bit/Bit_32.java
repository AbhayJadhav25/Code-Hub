public class Bit_32 {
  public static void main(String[] args) {
    int num = 10;
    String ans = "";
    while(num > 0){
      int rem = num%2;
      ans+=rem;
      num/=2;
    }
    char ch[] = ans.toCharArray();
    int left = 0 , right = ch.length ;

    while(left<right){
      char c = ch[left];
      ch[left] = ch[right];
      ch[right] = c;
    }

    
  }
}
