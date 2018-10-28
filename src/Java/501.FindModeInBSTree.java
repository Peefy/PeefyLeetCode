

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
    LinkedList<Integer> res = new LinkedList<>();
    boolean first;
    int val;
    int c;
    int max = -Integer.MAX_VALUE;
    void inOrder(TreeNode root){
        if(root == null)
            return;
        inOrder(root.left);
        TreeNode cur = root;
        if(first == true) {
            val = cur.val;
            c = 1;
            first = false;
        }
        else {
            if(val == cur.val)
                ++c;
            else {
                val = cur.val;
                c = 1; 
            }
        }
        if(c == max)
            res.add(cur.val);
        else if(c > max) 
        {
                max = c;
                res.clear();
                res.add(cur.val);
        }
        inOrder(root.right);
    }

    public int[] findMode(TreeNode root) {
        res.clear();
        if(root == null)
            return res.stream().mapToInt(i->i).toArray();
        first = true;
        c = 0;
        val = 0; 
        inOrder(root);
        return res.stream().mapToInt(i->i).toArray();
    }
}

