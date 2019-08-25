
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.BinaryTreeUpsideDown
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class Solution {
    public TreeNode UpsideDownBinaryTree(TreeNode root) {
        if(root == null || root.left == null) 
            return root;
        TreeNode newRoot = UpsideDownBinaryTree(root.left);
        root.left.left = root.right;
        root.left.right = root;
        root.left = null; 
        root.right = null;
        return newRoot;
    }
}
}