class Solution {
    public int reverse(int x) {
           boolean p = false;
      int q = 0;
      if (x < 0) {
          x = Math.abs(x);
          p = true;
      }
      try {
          while (x > 0) {
              q = q * 10 + (x % 10);
              x /= 10;
          }
      } catch (NumberFormatException ex) {
          return 0;
      }
      if (p) {
          q = (~(q - 1));
      }
        return q;
    }
}