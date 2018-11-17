using System;
using System.Collections.Generic;

namespace PeefyLeetCode.BinaryTreeTilt
{
    public class TreeNode
    {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
    }

    public class Solution
    {
        private int tilt = 0;
        public int GetVal(TreeNode root)
        {
            if (root == null)
            {
                return 0;
            }
            int leftsum = GetVal(root.left);
            int rightsum = GetVal(root.right);
            tilt += Math.Abs(leftsum - rightsum);
            return root.val + leftsum + rightsum;
        }

        public int FindTilt(TreeNode root)
        {
            GetVal(root);
            return tilt;
        }
    }
}