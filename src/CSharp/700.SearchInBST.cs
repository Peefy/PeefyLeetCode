
using System;
using System.Collections.Generic;
using System.Text;

namespace PeefyLeetCode.SearchBST
{
    public class TreeNode
    {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
    }

public class Solution {
    public TreeNode SearchBST(TreeNode root, int val) {
        if (root == null)
            return null;
        if (val == root.val)
            return root;
        else if (val < root.val)
            return SearchBST(root.left, val);
        else
            return SearchBST(root.right, val);
    }
}
}
