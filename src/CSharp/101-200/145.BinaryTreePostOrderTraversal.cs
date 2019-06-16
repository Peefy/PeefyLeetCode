
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.TreePostorderTraversal
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class Solution {
    public IList<int> PostorderTraversal(TreeNode root) {
        List<int> ans = new List<int>();
        if (root == null) 
            return ans;
        Stack <TreeNode> stack = new Stack<TreeNode>();
        stack.Push(root);
        TreeNode node;
        while (stack.Count > 0) {
            node = stack.Pop();
            ans.Insert(0, node.val);
            if (node.left != null) {
                stack.Push(node.left);
            }
            if (node.right != null) {
                stack.Push(node.right);
            }
        }
        return ans;
    }
}
}