
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


class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) {
        val = x;
    } 
}


class Solution {
    boolean dfs(TreeNode root, int pre, Integer ans) {
        if (root == null) 
            return true;
        boolean flag1 = dfs(root.left, root.val, ans);
        boolean flag2 = dfs(root.right, root.val, ans);
        if (flag1 && flag2) 
            ans++;
        return (root.val == pre) && flag1 && flag2;
    }

    public int countUnivalSubtrees(TreeNode root) {
        if (root == null) 
            return 0;
        Integer ans = 0;
        dfs(root, root.val, ans);
        return ans;
    }
}
