
using System;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.PreorderTraversal
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}


public class Solution {
    public IList<int> PreorderTraversal(TreeNode root) {
        Stack<TreeNode> stack = new Stack<TreeNode>();
        List<int> output = new List<int>();
        if (root == null) {
            return output;
        }

        stack.Push(root);
        while (!(stack.Count == 0)) {
            TreeNode node = stack.Pop();
            output.Add(node.val);
            if (node.right != null) {
                stack.Push(node.right);
            }
            if (node.left != null) {
                stack.Push(node.left);
            }
        }
        return output;
    }
}

}


