import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

import javax.lang.model.util.ElementScanner6;

class Solution {
    public int climbStairs(int n) {
        if (n <= 2)
            return n;
        int a = 1, b = 2, i = 3;
        while (i <= n) {
            int sum = a + b;
            a = b;
            b = sum;
            ++i;
        }
        return b;
    }
}
