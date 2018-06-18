import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}

class Solution {
    public boolean isSameNode(TreeNode left, TreeNode right) {
        if (left == null && right == null)
            return true;
        if (left == null && right != null)
            return false;
        if (left != null && right == null)
            return false;
        return left.val == right.val && isSameNode(left.left, right.right) && isSameNode(left.right, right.left);
    }
    public boolean isSymmetric(TreeNode root) {
        if (root == null)
            return true;
        return isSameNode(root.left, root.right);
    }
}
