public class MajorityElement {
  public static int majority(int arr[]) {
    int majority = arr[0], count = 0;
    for (int i = 1; i < arr.length; i++) {
      if (majority == arr[i]) {
        count++;
      } else {
        count--;

        if (count == 0) {
          majority = arr[i];
          count = 1;
        }
      }
    }
    return majority;
  }

  public static void main(String[] args) {
    int arr[] = { 2, 2, 1, 1, 2, 2 };
    int major = majority(arr);
    System.out.println(major);
  }
}
