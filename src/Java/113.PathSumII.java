
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
    public void dfs(TreeNode node, List<List<Integer>> ans, LinkedList<Integer> tmp, int s, int targetsum){
        tmp.add(node.val);
        targetsum += node.val;
        if (node.left == null && node.right == null){
            if (targetsum == s)
                ans.add(new LinkedList<>(tmp));
            return;
        }
        if (node.left != null){
            dfs(node.left, ans, tmp, s, targetsum);
            tmp.removeLast();
        }
        if (node.right != null){
            dfs(node.right, ans, tmp, s, targetsum);
            tmp.removeLast();
        }
    }

    public List<List<Integer>> pathSum(TreeNode root, int sum) {
        List<List<Integer>> ans = new LinkedList<>();
        if (root == null)
            return ans;
        LinkedList<Integer> tmp = new LinkedList<>();
        dfs(root, ans, tmp, sum, 0);
        return ans;
    }
}
