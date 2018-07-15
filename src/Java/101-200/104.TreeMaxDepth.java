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
    public int maxDepth(TreeNode root) {
        return root == null ? 0 :
            Math.max(maxDepth(root.left), maxDepth(root.right)) + 1;
    }
}
