
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
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> res = new ArrayList<>();
        if (root == null)
            return res;
        LinkedList<Boolean> stackVisited = new LinkedList<>();
        LinkedList<TreeNode> stackNode = new LinkedList<>();
        stackVisited.add(false);
        stackNode.add(root);
        while (stackNode.size() > 0){
            TreeNode cur_root = stackNode.removeLast();
            boolean vis = stackVisited.removeLast();
            if (vis == true)
                res.add(cur_root.val);                
            else{
                if (cur_root.right != null){
                    stackNode.add(cur_root.right);
                    stackVisited.add(false);
                }          
                stackNode.add(cur_root);
                stackVisited.add(true);
                if (cur_root.left != null){
                    stackNode.add(cur_root.left);
                    stackVisited.add(false);
                }             
            }        
        }
        return res;
    }
}
