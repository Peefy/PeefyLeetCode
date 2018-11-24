
using System;
using System.Collections.Generic;
using System.Text;

namespace PeefyLeetCode.TwoSumBST
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
        HashSet<int> s = new HashSet<int>();
        public bool FindTarget(TreeNode root, int k)
        {
            if (root == null)
                return false;
            if (s.Contains(root.val))
                return true;
            else
                s.Add(k - root.val);
            return FindTarget(root.left, k) || FindTarget(root.right, k);
        }
    }
}
