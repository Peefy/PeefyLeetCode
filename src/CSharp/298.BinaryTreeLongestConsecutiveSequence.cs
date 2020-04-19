
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.BinaryTreeLongestConsecutiveSequence
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class Solution {
    private int maxLen = 0;
     
    public int LongestConsecutive(TreeNode root) {
        LongestConsecutive(root, 0, 0);
        return maxLen;
    }
     
    private void LongestConsecutive(TreeNode root, int lastVal, int curLen) {
        if (root == null) return;
        if (root.val != lastVal + 1) curLen = 1;
        else curLen++;
        maxLen = Math.Max(maxLen, curLen);
        LongestConsecutive(root.left, root.val, curLen);
        LongestConsecutive(root.right, root.val, curLen);
    }
}

}