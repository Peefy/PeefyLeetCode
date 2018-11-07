

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
    public int lastsum = 0;
    public void order(TreeNode root){
        if (root == null)
            return;
        order(root.right);
        root.val += lastsum;
        lastsum = root.val;
        order(root.left);
    }

    public TreeNode convertBST(TreeNode root) {
        order(root);
        return root;
    }
}

