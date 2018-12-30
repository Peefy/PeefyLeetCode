
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

    TreeNode ans;
    TreeNode cur;

    public void inorder(TreeNode node){
        if (node == null) {
            return;
        }
        inorder(node.left);
        node.left = null;
        cur.right = node;
        cur = node;
        inorder(node.right);
    }

    public TreeNode increasingBST(TreeNode root) {
        ans = new TreeNode(-1);
        cur = new TreeNode(-1);
        inorder(root);
        return ans.right;
    }
}

