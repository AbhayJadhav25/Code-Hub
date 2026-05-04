import game.Indoor;
import game.Outdoor;

public class GameMain {
  public static void main(String[] args) {
    String[] in = { "Ram", "Shyam", "lakshaman" };
    String[] out = { "Om", "Sai", "Hari" };

    Indoor i = new Indoor(in);
    System.out.println("Indoor Player\n");
    i.display();

    Outdoor o = new Outdoor(out);
    System.out.println("Outdoor Player\n");
    o.display();
  }
}
