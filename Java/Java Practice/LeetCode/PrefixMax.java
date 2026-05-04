public class PrefixMax {
  public static void main(String[] args) {
    int a[] = { 5, 2, 3, 10, 1 };
    int pMax[] = new int[a.length];
    pMax[0] = a[0];

    for (int i = 1; i < a.length; i++) {
      pMax[i] = Math.max(pMax[i - 1], a[i]);
    }
    for (int i = 0; i < a.length; i++) {
      System.out.print(pMax[i] + " ");
    }
  }
}
