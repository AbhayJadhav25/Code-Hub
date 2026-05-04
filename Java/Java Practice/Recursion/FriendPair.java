/*Given n Friends , each one can reamain single or can be paired up with some one other friend.Each friend be only paired only once. Find out total number of ways in which friend can single or can be paired up.*/
public class FriendPair {
  public int friendPair(int num) {
    if (num == 1)
      return 1;
    if (num == 2)
      return 2;

    int leave_alone = 1 * friendPair(num - 1);
    int pairedUp = (num - 1) * friendPair(num - 2);

    return leave_alone + pairedUp;
  }

  public static void main(String[] args) {
    int frd = 4;
    FriendPair fp = new FriendPair();
    int ans = fp.friendPair(frd);
    System.out.println("Answer : " + ans);
  }
}
