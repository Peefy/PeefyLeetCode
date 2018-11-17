using System;
using System.Collections.Generic;

namespace PeefyLeetCode.SubtreeOfAnotherTree
{
    public class TreeNode
    {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
    }

public class Solution {
    bool IsSame(TreeNode s, TreeNode t){
        if (s == null && t == null)
            return true;
        if (s == null || t == null)
            return false;
        if (s.val != t.val)
            return false;
        return IsSame(s.left, t.left) && IsSame(s.right, t.right);
    }

    public bool IsSubtree(TreeNode s, TreeNode t) {
        if (s == null)
            return false;
        return IsSame(s, t) || IsSubtree(s.left, t) || IsSubtree(s.right, t);
    }
}
}