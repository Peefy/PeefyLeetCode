
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class Node {
    public int val;
    public Node left;
    public Node right;
    public Node next;

    public Node() {
    }

    public Node(int _val, Node _left, Node _right, Node _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};

class Solution {
    public int minimumTotal(List<List<Integer>> triangle) {
        int n = triangle.size();
        if (n == 0)
            return 0;
        int[] res = new int[n];
        for (int i = 0; i < n; i++) {
            res[i] = triangle.get(n - 1).get(i);
        }
        for (int i = n - 2; i > -1; i--) {
            int ni = triangle.get(i).size();
            for (int j = 0; j < ni; j++) {
                res[j] = Math.min(res[j], res[j+1]) + triangle.get(i).get(j);
            }
        }            
        return res[0];
    }
}
