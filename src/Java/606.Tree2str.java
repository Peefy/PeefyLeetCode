
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
    public String tree2str(TreeNode t) {
        if (t == null)
            return "";
        String s = String.valueOf(t.val);  
        String left = tree2str(t.left);
        String right = tree2str(t.right);
        if (left == "" && right == "")
            return s;
        if (right == "")
            return s+'('+left+')';
        return s+'('+left+')'+'('+right+')';
    }
}

