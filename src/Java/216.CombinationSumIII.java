
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;

class Solution {

    public final int MAX_INDEX = 10;

    public void traceBack(int k, int n, int sum, int begin, LinkedList<Integer> list, List<List<Integer>> ans){
        if (k == 0){
            if (n == sum)
                ans.add(new ArrayList<>(list));
            return;
        }
        for (int i = begin; i < MAX_INDEX; i++) {
            list.add(i);
            traceBack(k - 1, n, sum + i, i + 1, list, ans);
            list.removeLast();
        }
    }

    public List<List<Integer>> combinationSum3(int k, int n) {
        List<List<Integer>> ans = new ArrayList<>();
        traceBack(k, n, 0, 1, new LinkedList<>(), ans);
        return ans;
    }
}

