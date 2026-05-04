import java.util.*;

public class JaggedArray {
  public static void main(String a[]) {
    Scanner sc = new Scanner(System.in);

    int nums[][] = new int[3][];

    nums[0] = new int[3];
    nums[1] = new int[4];
    nums[2] = new int[2];

    for (int i = 0; i < nums.length; i++) {
      System.out.println("Enter " + nums[i].length + " Elements");
      for (int j = 0; j < nums[i].length; j++) {
        nums[i][j] = sc.nextInt();
      }
    }

    System.out.println("Jagged Array : ");
    for (int i = 0; i < nums.length; i++) {
      for (int j = 0; j < nums[i].length; j++) {
        System.out.print(nums[i][j] + " ");
      }
      System.out.println();
    }
  }
}