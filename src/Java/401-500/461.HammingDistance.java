

import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int hammingDistance(int x, int y) {
        int count = 0;
        char[] binstr = Integer.toBinaryString(x ^ y).toCharArray();
        for (char c : binstr) {
            count += c == '1' ? 1 : 0;
        }
        return count;
    }
}


