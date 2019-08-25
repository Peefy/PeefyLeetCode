
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

public class TreeNode {     
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}

class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> ans = new LinkedList<>();
        if (root == null)
            return ans;
        LinkedList<TreeNode> level = new LinkedList<>();
        level.add(root);
        int order = 1;
        while (level.size() > 0){
            List<Integer> cur = new LinkedList<>();
            LinkedList<TreeNode> next_level = new LinkedList<>();
            for (TreeNode node : level) {
                cur.add(node.val);
                if (node.left != null)
                    next_level.add(node.left);
                if (node.right != null)
                    next_level.add(node.right);
            }
            if (order == -1)
                Collections.reverse(cur);
            ans.add(cur);
            level = next_level;
            order = -order;
        }
        return ans;
    }
}
