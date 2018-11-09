
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
    int count = 0;
    public int order(TreeNode root){
        if (root == null)
            return 0;
        int leftcount = order(root.left);
        int rightcount = order(root.right);
        if (leftcount + rightcount > count)
            count = leftcount + rightcount;
        return Math.max(leftcount, rightcount) + 1;
    }

    public int diameterOfBinaryTree(TreeNode root) {
        count = 0;
        order(root);
        return count;
    }
}

