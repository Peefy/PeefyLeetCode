using System;
using System.Collections.Generic;

namespace PeefyLeetCode.DiameterOfBinaryTree
{
    public class TreeNode
    {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
    }

public class Solution {
    public int DiameterOfBinaryTree(TreeNode root) {
    int count = 0;
    int order(TreeNode root){
        if (root == null)
            return 0;
        int leftcount = order(root.left);
        int rightcount = order(root.right);
        if (leftcount + rightcount > count)
            count = leftcount + rightcount;
        return Math.Max(leftcount, rightcount) + 1;
    }

    public int diameterOfBinaryTree(TreeNode root) {
        count = 0;
        order(root);
        return count;
    }
    }
}
}