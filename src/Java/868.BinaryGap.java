
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Set;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int binaryGap(int N) {
        int longest = 0, cur = -10000;
        while (N != 0) {
            if (N % 2 == 1) {
                ++cur;
                if (cur > longest)
                    longest = cur;
                cur = 0;
            } else {
                ++cur;
            }
            N >>>= 1;
        }
        return longest;
    }
}
