import java.awt.List;
import java.lang.Math;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;

class Solution {
    public int arrangeCoins(int n) {
        return (int)(-1 + Math.sqrt(1 + 8 * (double)n) / 2.0 + 0.5);
    }
}