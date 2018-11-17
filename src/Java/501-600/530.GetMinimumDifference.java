

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
    public void inorder(TreeNode root, LinkedList<Integer> nodelist) {
        if (root == null) {
            return;
        }
        inorder(root.left, nodelist);
        nodelist.add(root.val);
        inorder(root.right, nodelist);
    }

    public int getMinimumDifference(TreeNode root) {
        LinkedList<Integer> nodelist = new LinkedList<>();
        inorder(root, nodelist);
        int n = nodelist.size();
        int minval = Integer.MAX_VALUE;
        for (int i = 0; i < n - 1; i++) {
            minval = Math.min(minval, nodelist.get(i + 1) - nodelist.get(i));
        }
        return minval;
    }
}

