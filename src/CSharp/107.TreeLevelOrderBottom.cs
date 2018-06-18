using System;
using System.Collections.Generic;

namespace PeefyLeetCode.TreeLevelOrderBottom
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
        public int MaxDepth(TreeNode root)
        {
            return root == null ? 0 :
                System.Math.Max(MaxDepth(root.left), MaxDepth(root.right)) + 1;
        }

        public IList<IList<int>> LevelOrderBottom(TreeNode root)
        {
            List<IList<int>> result = new List<IList<int>>();
            if (root == null)
                return result;
            int n = this.MaxDepth(root);
            for (int i = 0; i < n; i++)
            {
                result.Add(new List<int>());
            }
            --n;
            Queue<TreeNode> queue = new Queue<TreeNode>();
            queue.Enqueue(root);
            while (queue.Count > 0 && n >= 0)
            {
                int count = queue.Count;
                for (int i = 0; i < count; i++)
                {
                    TreeNode node = queue.Dequeue();
                    result[n].Add(node.val);
                    if (node.left != null)
                        queue.Enqueue(node.left);
                    if (node.right != null)
                        queue.Enqueue(node.right);
                }
                --n;
            }
            return result;
        }

    }
}