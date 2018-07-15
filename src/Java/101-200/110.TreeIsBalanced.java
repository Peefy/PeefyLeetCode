
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
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
    public int getHeight(TreeNode node){
        if (node == null)
            return 0;
        int left = getHeight(node.left);
        int right = getHeight(node.right);
        if (left == -1 || right == -1 || Math.abs(left - right) > 1)
            return -1;
        return Math.max(left, right) + 1;
    }

    public boolean isBalanced(TreeNode root) {
        if (root == null)
            return true;
        return getHeight(root) != -1;
    }
}
