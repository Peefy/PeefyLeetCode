
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.KthSmallestElementInaBST
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class Solution {
    private int i = 0;
    private int val = 0;
    public int KthSmallest(TreeNode root, int k) {
        ldr(root, k);
        return val;
    }

    public void ldr(TreeNode root, int k) {
        if (root == null) {
            return;
        }
        ldr(root.left, k);
        if (k == ++i) {
            val = root.val;
        }
        ldr(root.right, k);
    }
}
}