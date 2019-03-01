
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class Solution {
    public double myPow(double x, int n) {
        if (n == 1) {
            return x;
        }
        if (n == 0) {
            return 1;
        }
        int t = n / 2;
        if (n < 0) {
            x = 1 / x;
            t = -t;
        }
        double res = myPow(x, t);
        if (n % 2 == 0)
            return res * res;
        return res * res * x;
    }
}
