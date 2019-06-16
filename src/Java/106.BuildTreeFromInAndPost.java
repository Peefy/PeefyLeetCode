
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
    public TreeNode buildTree(int[] inorder, int[] postorder) {
        int n = postorder.length;
        if (n == 0)
            return null;
        HashMap<Integer, Integer> idx = new HashMap<>();
        for (int i = 0; i < n; i++) {
            idx.put(inorder[i], i);
        }
        LinkedList<TreeNode> st = new LinkedList<>();
        TreeNode root = new TreeNode(postorder[n - 1]);
        TreeNode cur = root;
        for (int i = n - 2; i >= 0; i--) {
            st.add(cur);
            int val = postorder[i];
            if (idx.get(val) > idx.get(cur.val)){
                cur.right = new TreeNode(val);
                cur = cur.right;
            }
            else{
                while (st.size() > 0 && idx.get(val) < idx.get(st.getLast().val)){
                    cur = st.removeLast();
                }           
                cur.left = new TreeNode(val);
                cur = cur.left;
            }
        }
        return root;
    }
}
