
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.ValidateBinarySearchTree
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class Solution {
    long tmp = long.MinValue;
    public bool IsValidBST(TreeNode root) {
                if(root == null) return true;
        if (IsValidBST(root.left)) {
            if (tmp < root.val) {
                tmp = root.val;
                return IsValidBST(root.right);
            }
        }
        return false;
    }
}
}