
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
    public int titleToNumber(String s) {
        char[] arr = s.toCharArray();
        int sum = 0;
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            int j = n - i - 1;
            sum += (arr[j] - 'A' + 1) * Math.pow(26, i);
        }
        return sum;
    }
}


