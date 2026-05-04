class TappingRainWater {
  public static int solution1(int arr[]) {
    int totalWater = 0;
    int n = arr.length;

    int lMax[] = new int[n];
    int rMax[] = new int[n];

    // Fill left max
    lMax[0] = arr[0];
    for (int i = 1; i < n; i++) {
      lMax[i] = Math.max(arr[i], lMax[i - 1]);
    }

    // Fill right max
    rMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      rMax[i] = Math.max(arr[i], rMax[i + 1]);
    }

    // Calculate trapped water
    for (int i = 0; i < n; i++) {
      int waterLevel = Math.min(lMax[i], rMax[i]);
      totalWater += waterLevel - arr[i];
    }

    return totalWater;
  }

  public static int solution2(int arr[]) {
    int left = 0, right = arr.length - 1;
    int lMax = 0, rMax = 0;
    int totalWater = 0;
    while (left < right) {
      lMax = Math.max(arr[left], lMax);
      rMax = Math.max(arr[right], rMax);

      if (lMax < rMax) {
        int waterLevel = lMax - arr[left];
        totalWater += waterLevel;
        left++;
      } else {
        int waterLevel = rMax - arr[right];
        totalWater += waterLevel;
        right--;
      }
    }
    return totalWater;
  }

  public static void main(String args[]) {
    int height[] = { 4, 2, 0, 6, 3, 2, 5 };
    int ans = solution2(height);

    System.out.println("Answer = " + ans);
  }
}