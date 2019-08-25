
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.BinaryTreeRightSideView
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
        void helper(TreeNode root, int level, List<int> res)
        {
            if (root == null) 
                return;
            if (res.Count == level) 
                res.Add(root.val);
            helper(root.right, level + 1, res);
            helper(root.left, level + 1, res);
        }
        public IList<int> RightSideView(TreeNode root)
        {
            List<int> res = new List<int>();
            helper(root, 0, res);
            return res;
        }
    }
}