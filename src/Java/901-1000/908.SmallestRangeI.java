
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
    public int smallestRangeI(int[] A, int K) {
        int maxv = 0;
        int minv = 10000;
        for (int a : A){
            maxv = Math.max(a, maxv);
            minv = Math.min(a, minv);
        }
        return Math.max(0, maxv - minv - 2 * K);
    }
}
