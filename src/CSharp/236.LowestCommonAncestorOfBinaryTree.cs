
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.LowestCommonAncestorOfBinaryTree
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class Solution {
    public TreeNode LowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if (root == null || root.Equals(p) || root.Equals(q))
            return root;
        TreeNode l = LowestCommonAncestor(root.left, p, q);
        TreeNode r = LowestCommonAncestor(root.right, p, q);
        if (l == null)
            return r;
        else {
            if (r == null)
                return l;
            return root;
        }
    }
}
}