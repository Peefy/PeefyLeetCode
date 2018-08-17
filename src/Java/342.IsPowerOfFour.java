
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;

class Solution {
    public boolean isPowerOfFour(int n) {
        if (num <= 0) 
            return false;
        int ans = Math.log10(n) / Math.log10(4);
        return ans % 1 == 0;
    }
}


