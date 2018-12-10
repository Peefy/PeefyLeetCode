
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
    public int reachNumber(int target) {
        target = Math.abs(target);
        int n = (int)Math.ceil((-1.0 + Math.sqrt(1 + 8.0 * target)) / 2);
        if ((n * (n + 1) / 2) == target)
            return n;
        int d = (n * (n + 1) / 2) - target;
        if ((d & 1) == 0)
            return n;
        return (n & 1) > 0 ? n + 2 : n + 1;
    }
}
