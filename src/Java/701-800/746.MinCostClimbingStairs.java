
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int minCostClimbingStairs(int[] cost) {
        int length = cost.length;
        if (length == 1)
            return cost[0];
        int i = 2;
        for (; i < length; i++) {
            cost[i] = cost[i] + Math.min(cost[i - 1], cost[i - 2]);
        }   	
        return Math.min(cost[i - 1], cost[i - 2]);
    }
}
