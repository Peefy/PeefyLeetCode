
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;

public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}

class Solution {
    int re = 0;
    public int longestUnivaluePath(TreeNode root) {
        dfs(root, 0);
        return re;
    }
    public int dfs(TreeNode node, int n) {
        if (node == null)
			return 0;
		int left = dfs(node.left, node.val);
		int right = dfs(node.right, node.val);
		re = Math.max(re, left + right);
		return node.val == n ? Math.max(left, right) + 1 : 0;

    }
}

