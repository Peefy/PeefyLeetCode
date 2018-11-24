
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashSet;
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
    public boolean findTarget(TreeNode root, int k) {
        if (root == null)
            return false;
        LinkedList<TreeNode> queue = new LinkedList<>();
        queue.add(root);
        HashSet<Integer> nums = new HashSet<>();
        while (queue.size() > 0){
            TreeNode node = queue.pollFirst();
            if (nums.contains(k - node.val))
                return true;
            nums.add(node.val);
            if (node.left != null)
                queue.add(node.left);
            if (node.right != null)
                queue.add(node.right);
        }
        return false;
    }
}

