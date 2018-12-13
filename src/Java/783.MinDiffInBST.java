
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

    private int lastval = -99999;
    private int minsub = 99999;

    public int minDiffInBST(TreeNode root) {
        if (root == null)
            return minsub;
        minDiffInBST(root.left);
        minsub = Math.min(minsub, root.val - lastval);
        lastval = root.val;
        minDiffInBST(root.right);
        return minsub;
    }
}

