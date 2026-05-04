class star {
  public static void star1(int row) {
    for (int i = 0; i < row; i++) {
      for (int j = 0; j <= i; j++) {
        System.out.print("*");
      }
      System.out.println();
    }
  }

  public static void star2(int row) {
    for (int i = row; i >= 0; i--) {
      for (int j = 0; j <= i; j++) {
        System.out.print("*");
      }
      System.out.println();
    }
  }

  public static void star3(int row) {
    for (int i = 1; i <= row; i++) {
      for (int j = 1; j <= row - i; j++) {
        System.out.print(" ");
      }
      for (int j = 1; j <= i; j++) {
        System.out.print("* ");
      }
      System.out.println();
    }
  }

  public static void star4(int row) {
    for (int i = row; i >= 0; i--) {
      for (int j = 1; j <= row - i; j++) {
        System.out.print(" ");
      }
      for (int j = 1; j <= i; j++) {
        System.out.print("* ");
      }
      System.out.println();
    }
  }

  public static void star5(int row) {
    for (int i = 1; i <= row; i++) {
      for (int j = 1; j <= row; j++) {
        if (j == 1 || i == row || i == j) {
          System.out.print("x ");
        } else {
          System.out.print("  ");
        }
      }
      System.out.println();
    }
  }

  public static void star6(int row) {
    for (int i = 1; i <= row; i++) {
      for (int j = 1; j <= row; j++) {
        if (i == 1 || j == 1 || i + j == row + 1) {
          System.out.print("* ");
        } else {
          System.out.print("  ");
        }
      }
      System.out.println();
    }
  }

  public static void star7(int row) {
    for (int i = 1; i <= row; i++) {
      for (int j = 1; j <= row - i; j++) {
        System.out.print(" ");
      }
      for (int j = 1; j <= (i * 2) - 1; j++) {
        System.out.print("*");
      }
      System.out.println();
    }
    for (int i = row; i >= 0; i--) {
      for (int j = 1; j <= row - i; j++) {
        System.out.print(" ");
      }
      for (int j = 1; j <= (i * 2) - 1; j++) {
        System.out.print("*");
      }
      System.out.println();
    }
  }

  public static void star8(int row) {
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < row; j++) {
        System.out.print("*");
      }
      System.out.println();
    }
  }

  public static void main(String[] args) {
    star8(5);
  }
}