
using System;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.BinarySearchTreeIterator
{

public class TreeNode {
    public int val;     
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class BSTIterator {
    private Stack <TreeNode> stack = new Stack<TreeNode>();
    public BSTIterator(TreeNode root) {
        if (root == null){
            return;
        }
        stack.Push(root);
        while (root.left != null){
            stack.Push(root.left);
            root = root.left;
        }
    }
    
    /** @return the next smallest number */
    public int Next() {
                TreeNode node = this.stack.Pop();
        if (node.right != null){
            this.stack.Push(node.right);
            TreeNode t = node.right;
            while (t.left != null){
                stack.Push(t.left);
                t = t.left;
            }
        }
        return node.val;
    }
    
    /** @return whether we have a next smallest number */
    public bool HasNext() {
        return this.stack.Count != 0;
    }
}

}



