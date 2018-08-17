using System;

namespace PeefyLeetCode.CountPrimes {
    public class Solution {
        public int CountPrimes (int n) {
            if (n <= 2)
                return 0;
            bool[] visit = new bool[n + 1];
            for (int k = 0; k < n + 1; k++) {
                visit[k] = true;
            }
            int count = n - 1;
            int i = 2;
            while (i * i <= n) {
                if (visit[i] == true) {
                    int j = i * i;
                    while (j <= n) {
                        if (visit[j] == true) {
                            visit[j] = false;
                            count -= 1;
                        }
                        j += i;
                    }
                }
                i += 1;
            }
            int div = (int) Math.Sqrt (n);
            for (int k = 2; k <= div; ++k)
                if (n % k == 0)
                    return count;
            return count - 1;
        }
    }
}