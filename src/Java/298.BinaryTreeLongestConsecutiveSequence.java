
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.HashMap;
import java.util.HashSet;

public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}

public class Solution {
    private int maxLen = 0;
     
    public int longestConsecutive(TreeNode root) {
        longestConsecutive(root, 0, 0);
        return maxLen;
    }
     
    private void longestConsecutive(TreeNode root, int lastVal, int curLen) {
        if (root == null) return;
        if (root.val != lastVal + 1) curLen = 1;
        else curLen++;
        maxLen = Math.max(maxLen, curLen);
        longestConsecutive(root.left, root.val, curLen);
        longestConsecutive(root.right, root.val, curLen);
    }
}

