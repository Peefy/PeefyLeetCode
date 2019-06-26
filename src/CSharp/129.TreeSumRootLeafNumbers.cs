
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.TreeSumRootLeafNumbers
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class Solution {
    private int sum(TreeNode root, int val) {
        if (root == null) {
            return 0;
        }
        val = 10 * val + root.val;
        if (root.left == null && root.right == null) {
            return val;
        }
        return sum(root.left, val) + sum(root.right, val);
    }
    public int SumNumbers(TreeNode root) {
        if (root == null) {
            return 0;
        }
        return sum(root, 0);
    }
}
}