
import java.awt.List;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Collections;
import java.util.Comparator;
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
    public List<String> binaryTreePaths(TreeNode root) {
        String to = "->";
        LinkedList<String> l = new LinkedList<>();
        if (root == null) {
            return l;
        }
        if (root.left == null && root.right == null){
            l.add(new Integer(root.val).toString());
            return l;
        }
        List<String> ll = binaryTreePaths(root.left);
        List<String> lr = binaryTreePaths(root.right);
        for (String s : ll){
            l.add(new Integer(root.val).toString() + to + s);
        }
        for (String s : lr){
            l.add(new Integer(root.val).toString() + to + s);
        }
        return l;
    }
}
