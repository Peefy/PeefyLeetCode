
import java.awt.List;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;

class Solution {
    public int trailingZeroes(int n) {
        int sum = 0;
        for (long i = 5; i <= n; i *= 5) {
            sum += n / i;
        }
        return sum;
    }
}


