
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
    private int tilt = 0;
    
    public int getval(TreeNode root){
        if (root == null) {
            return 0;
        }
        int leftsum = getval(root.left);
        int rightsum = getval(root.right);
        tilt += Math.abs(leftsum - rightsum);
        return root.val + leftsum + rightsum;
    }

    public int findTilt(TreeNode root) {
        getval(root);
        return tilt;
    }
}

