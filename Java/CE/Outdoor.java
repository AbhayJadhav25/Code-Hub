package game;

public class Outdoor {
  String player[];

  public Outdoor() {
    player = new String[] {};
  }

  public Outdoor(String player[]) {
    this.player = player;
  }

  public void display() {
    for (int i = 0; i < player.length; i++) {
      System.out.print(player[i] + " ");
    }
  }
}
