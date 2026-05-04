public class SuffixSum {
  public static void main(String[] args) {
    int a[] = { 10, 4, 7, 40 };
    int p[] = new int[a.length];
    int n = a.length;
    p[n - 1] = a[n - 1];

    for (int i = n - 2; i >= 0; i--) {
      p[i] = p[i + 1] + a[i];
    }

    for (int i = 0; i < n; i++) {
      System.out.print(p[i] + " ");
    }
  }
}
