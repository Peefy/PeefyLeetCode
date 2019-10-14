
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
        if (n == 0 || citations[n - 1] == 0)
            return 0;
        int left = 0;
        int right = n - 1;
        while (left < right) {
            int mid = (left + right) >>> 1;
            if (citations[mid] < n - mid)
                left = mid + 1;
            else
                right = mid;
        }
        return n - left;
    }
}

