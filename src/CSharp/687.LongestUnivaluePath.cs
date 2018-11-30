
using System;
using System.Collections.Generic;
using System.Text;

namespace PeefyLeetCode.LongestUnivaluePath
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
        int re = 0;
        public int LongestUnivaluePath(TreeNode root)
        {
            dfs(root, 0);
            return re;
        }
        int dfs(TreeNode node, int n)
        {
            if (node == null)
                return 0;
            int left = dfs(node.left, node.val);
            int right = dfs(node.right, node.val);
            re = Math.Max(re, left + right);
            return node.val == n ? Math.Max(left, right) + 1 : 0;
        }
    }
}
