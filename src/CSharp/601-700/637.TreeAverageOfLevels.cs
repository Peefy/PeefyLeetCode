
using System;
using System.Collections.Generic;
using System.Text;

namespace PeefyLeetCode.AverageOfLevels
{
    public class TreeNode
    {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
    }
public class Solution {
    public IList<double> AverageOfLevels(TreeNode root) {
        var r = new List<double>();
        if (root == null)
            return r;
        var q = new Queue<TreeNode>();
        q.Enqueue(root);
        while (q.Count > 0){
            double sum = 0;
            double l = q.Count;
            for (int i = 0; i < l; ++i){
                var node = q.Dequeue();
                sum += node.val;
                if (node.left != null)
                    q.Enqueue(node.left);
                if (node.right != null)
                    q.Enqueue(node.right);
            }
            r.Add(sum / l);
        }
        return r;
    }
}
}
