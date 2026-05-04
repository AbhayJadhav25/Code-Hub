public class BitOperation {
  public static void getBit(int num, int pos) {
    int BitMask = 1 << pos;
    int bit = BitMask & num;
    if (bit == 0) {
      System.out.println("Bit is zero");
    } else {
      System.out.println("Bit is one");
    }
  }

  public static int setBit(int num, int pos) {
    int bitMask = 1 << pos;
    int setbit = bitMask | num;
    // System.out.println("Number before set the Bit : " + num + "\nNumber After set
    // the bit : " + setbit);
    return setbit;
  }

  public static int clearBit(int num, int pos) {
    int bitMask = ~(1 << pos);
    int res = bitMask & num;
    // System.out.println("Number before set the Bit : " + num + "\nNumber After set
    // the bit : " + res);
    return res;
  }

  public static int updateBit(int num, int pos, int newBit) {
    if (newBit == 0) { // 1 REPLACE WITH BIT ZERO
      return clearBit(num, pos);
    } else { // 0 REPLACE WITH BIT 1
      return setBit(num, pos);
    }
  }

  public static int clearLastIbits(int n, int i) {
    int bitMask = ~(0) << i;
    return n & bitMask;
  }

  public static int setLastIbits(int n, int i) {
    int bitMask = ((1 << i) - 1);
    return n | bitMask;
  }

  public static int clearRangeOfIBits(int n, int i, int j) {
    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;
    int bitMask = a | b;
    return n & bitMask;
  }

  public static boolean isPowerOf2(int n) {
    int bitMask = n & (n - 1);
    if (bitMask == 0) {
      return true;
    } else {
      return false;
    }
  }

  public static int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
      if ((n & 1) != 0) {
        count++;
      }
      n = n >> 1;
    }
    return count;
  }

  public static int fastExpo(int a, int b) {
    int ans = 1;
    while (b > 0) {
      if ((b & 1) != 0) {
        ans = ans * a;
      }
      a = a * a;
      b = b >> 1;
    }
    return ans;
  }

  public static long fastModulo(long a, long b, long m) {
    long ans = 1;
    a %= m;
    while (b > 0) {
      if ((b & 1) != 0) {
        ans = (ans * a) % m;
      }
      a = (a * a) % m;
      b = b >> 1;
    }
    return ans;
  }

  public static void main(String[] args) {
    // int num = 10;
    // int pos = 2;
    // int newBit = 1;
    // getBit(num, pos);

    // setBit(num, pos);
    // clearBit(num, pos);
    // int res = updateBit(num, pos, newBit);
    // System.out.println(res);

    // Clear Last i bits
    int n = 15;
    int i = 2;
    int res = clearLastIbits(n, i);
    System.out.println(res);

    // set Last i bits
    int n1 = 12;
    int i1 = 2;
    int res1 = setLastIbits(n1, i1);
    System.out.println(res1);

    System.out.println(clearRangeOfIBits(31, 1, 3));

    System.out.println(isPowerOf2(16));
    System.out.println(isPowerOf2(17));

    System.out.println(countSetBits(10));

    System.out.println(fastExpo(13, 15));

    System.out.println(fastModulo(5, 13, 3));
  }
}
