
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
    public int maxCount(int m, int n, int[][] ops) {
        if (ops.length == 0)
            return m * n;
        int minm = ops[0][0];
        int minn = ops[0][1];
        for (int[] each : ops) {
            minm = Math.min(minm, each[0]);
            minn = Math.min(minn, each[1]);
        }
        return minm * minn;
    }
}
