using System;

namespace PeefyLeetCode.LowestCommonAncestor
{
    public class TreeNode
    {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
    }

public class Solution {
    public TreeNode LowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if (root == null) {
            return null;
        }
        if (Math.Max(p.val, q.val) < root.val) {
            return LowestCommonAncestor(root.left, p, q);
        }
        if (Math.Min(p.val, q.val) > root.val) {
            return LowestCommonAncestor(root.right, p, q);
        }
        return root;
    }
}

}