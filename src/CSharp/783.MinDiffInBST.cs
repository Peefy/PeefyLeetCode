
using System;
using System.Collections.Generic;
using System.Text;

namespace PeefyLeetCode.MinDiffInBST
{
    public class TreeNode
    {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
    }

public class Solution {
    private int lastval = -99999;
    private int minsub = 99999;
    public int MinDiffInBST(TreeNode root) {
        if (root == null)
            return minsub;
        MinDiffInBST(root.left);
        minsub = Math.Min(minsub, root.val - lastval);
        lastval = root.val;
        MinDiffInBST(root.right);
        return minsub;
    }
}
}
