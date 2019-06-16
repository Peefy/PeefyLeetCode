
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
    public void recursive(List<List<Integer>> ans, LinkedList<Integer> tmp, int n, int k, int index){
        if (tmp.size() == k){
            ans.add(new LinkedList<>(tmp));
            return;
        }
        for (int i = index; i < n + 1; i++) {
            tmp.add(i);
            recursive(ans, tmp, n, k, i + 1);
            tmp.removeLast();
        }
    }

    public List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> ans = new LinkedList<>();
        recursive(ans, new LinkedList<>(), n, k, 1);
        return ans;
    }
}
