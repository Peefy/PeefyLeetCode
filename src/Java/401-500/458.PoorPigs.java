

import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        if (buckets == 1)
            return 0;
        int base = minutesToTest / minutesToDie + 1;
        int r = 1;
        for (int i = 1;i < 100000;i++)
        {
            r *= base;
            if (r >= buckets)
                return i;
        }
        return 0;
    }
}


