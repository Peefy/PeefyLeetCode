
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}

class Solution {
    public TreeNode inorderSuccessor(TreeNode root, TreeNode p) {
        TreeNode cur = root;
        TreeNode pre = null;
        LinkedList<TreeNode> s = new LinkedList<>();
        while (cur != null || !s.isEmpty()) {
            while (cur != null) {
                s.push(cur);
                cur = cur.left;
            }
            if (s.size() > 0) {
                cur = s.getLast();
                if (pre == p)
                    return cur;
                s.removeLast();
                pre = cur;
                cur = cur.right;
            }
        }
        return null;
    }
}
