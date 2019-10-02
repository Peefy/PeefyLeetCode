
import java.util.List;
import java.util.TreeSet;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;

public class Solution {
    private void find(int from, int n, int[] factors, int len, List<List<Integer>> results) {
        for (int i = from; i * i <= n; i++) {
            if (n % i == 0) {
                factors[len] = i;
                find(i, n / i, factors, len + 1, results);
            }
        }
        if (len > 0) {
            factors[len] = n;
            Integer[] f = new Integer[len + 1];
            for (int i = 0; i <= len; i++)
                f[i] = factors[i];
            results.add(Arrays.asList(f));
        }
    }

    public List<List<Integer>> getFactors(int n) {
        int p = 0;
        for (int i = 1; i <= n; p++, i *= 2)
            ;
        List<List<Integer>> results = new ArrayList<>();
        find(2, n, new int[p], 0, results);
        return results;
    }
}
