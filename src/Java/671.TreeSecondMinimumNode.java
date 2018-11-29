
import java.awt.List;
import java.util.ArrayList;
import java.util.PriorityQueue;
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

    HashSet<Integer> queue;

    public void dfs(TreeNode node){
        if (node == null)
            return;
        queue.add(node.val);
        dfs(node.left);
        dfs(node.right);
    }

    public int findSecondMinimumValue(TreeNode root) {
        queue = new HashSet<>();
        dfs(root);
        int min1 = root.val;
        int res = Integer.MAX_VALUE;
        for (Integer i : queue) {
            if (min1 < i && i < res)
                res = i;
        }
        return res < Integer.MAX_VALUE ? res : -1;
    }
}

