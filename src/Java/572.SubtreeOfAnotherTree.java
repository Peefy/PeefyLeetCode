
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
    public String treeSearilise(TreeNode node){
        if (node == null)
            return "N";
        return String.format("#{}#", node.val) + treeSearilise(node.left) + treeSearilise(node.right);
    }

    public boolean isSubtree(TreeNode s, TreeNode t) {
        return treeSearilise(s).contains(treeSearilise(t));
    }
}

