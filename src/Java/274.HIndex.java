
import java.util.List;
import java.util.TreeSet;
import java.util.Map.Entry;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;
import java.util.Stack;

class Solution {
    public int hIndex(int[] citations) {
        int n = citations.length;
        int[] bucket = new int[n + 1];
        for (int c : citations) {
            if (c >= n)
                bucket[n] += 1;
            else
                bucket[c] += 1;
        }
        int cur = 0;
        for (int i = n; i > 0; i--) {
            cur += bucket[i];
            if (cur >= i)
                return i;
        }
        return 0;
    }
}

