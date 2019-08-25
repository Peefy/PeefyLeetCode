
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.BinaryTreeZigzagLevelOrderTraversal
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class Solution {
    public IList<IList<int>> ZigzagLevelOrder(TreeNode root) {
        IList<IList<int>> ans = new List<IList<int>>();
        if (root == null)
            return ans;
        List<TreeNode> level = new List<TreeNode>();
        level.Add(root);
        int order = 1;
        while (level.Count > 0){
            List<int> cur = new List<int>();
            List<TreeNode> next_level = new List<TreeNode>();
            foreach (TreeNode node in level) {
                cur.Add(node.val);
                if (node.left != null)
                    next_level.Add(node.left);
                if (node.right != null)
                    next_level.Add(node.right);
            }
            if (order == -1)
                cur.Reverse();
            ans.Add(cur);
            level = next_level;
            order = -order;
        }
        return ans;
    }
}
}