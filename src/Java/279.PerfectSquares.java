
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
    public int numSquares(int n) {
        int[] dp = new int[n + 1]; 
        for (int i = 1; i <= n; i++) {
            dp[i] = i; 
            for (int j = 1; i - j * j >= 0; j++) { 
                dp[i] = Math.min(dp[i], dp[i - j * j] + 1); 
            }
        }
        return dp[n];
    }
}

