package game;

public class Indoor {
  String player[];

  public Indoor() {
    player = new String[] {};
  }

  public Indoor(String player[]) {
    this.player = player;
  }

  public void display() {
    for (int i = 0; i < player.length; i++) {
      System.out.print(player[i] + " ");
    }
  }
}
