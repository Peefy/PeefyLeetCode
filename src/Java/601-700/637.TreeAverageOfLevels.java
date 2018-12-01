
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
    public List<Double> averageOfLevels(TreeNode root) {
        LinkedList<Double> r = new LinkedList<>();
        if (root == null)
            return r;
        LinkedList<TreeNode> q = new LinkedList<>();
        q.add(root);
        while (q.size() > 0){
            double sum = 0;
            LinkedList<TreeNode> newq = new LinkedList<>();
            double l = q.size();
            for (TreeNode node : q){
                sum += node.val;
                if (node.left != null)
                    newq.add(node.left);
                if (node.right != null)
                    newq.add(node.right);
            }
            r.add(sum / l);
            q = newq;
        }
        return r;
    }
}

