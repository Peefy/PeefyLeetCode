using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ConvertBST
{
    public class TreeNode
    {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
    }

public class Solution {
    int lastsum = 0;
    public TreeNode ConvertBST(TreeNode root) {
        if (root == null)
            return null;
        ConvertBST(root.right);
        root.val += lastsum;
        lastsum = root.val;
        ConvertBST(root.left);
        return root;
    }
}
}