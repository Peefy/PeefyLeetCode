
import java.util.List;
import java.util.TreeSet;
import java.util.Map.Entry;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;
import java.util.Stack;

class Solution {
    public int nthUglyNumber(int n) {
        int[] dp = new int[n];
        dp[0] = 1;
        int p2 = 0, p3 = 0, p5 = 0;
        for (int i = 1; i < n; i++) {
            dp[i] = Math.min(dp[p2] * 2, dp[p3] * 3);
            dp[i] = Math.min(dp[i], dp[p5] * 5);
            if (dp[i] >= dp[p2] * 2)
                p2 += 1;
            if (dp[i] >= dp[p3] * 3)
                p3 += 1;
            if (dp[i] >= dp[p5] * 5)
                p5 += 1;
        }
        return dp[n - 1];
    }
}
