using System;
using System.Collections.Generic;

namespace PeefyLeetCode.IncreasingBST
{
    public class TreeNode
    {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
    }

public class Solution {
    TreeNode ans;
    TreeNode cur;

    public void inorder(TreeNode node){
        if (node == null) {
            return;
        }
        inorder(node.left);
        node.left = null;
        cur.right = node;
        cur = node;
        inorder(node.right);
    }
    public TreeNode IncreasingBST(TreeNode root) {
        ans = new TreeNode(-1);
        cur = new TreeNode(-1);
        inorder(root);
        return ans.right;
    }
}

}