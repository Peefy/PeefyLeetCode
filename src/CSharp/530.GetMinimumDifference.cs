using System;
using System.Collections.Generic;

namespace PeefyLeetCode.GetMinimumDifference
{
    public class TreeNode
    {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
    }

public class Solution {
    int minval = 2147483647;
    TreeNode prenode = null;
    public int GetMinimumDifference(TreeNode root) {
        InOrder(root);
        return minval;
    }

    public void InOrder(TreeNode t){
        if(t == null){
            return;
        }
        InOrder(t.left);
        if(prenode != null){
            minval = Math.Min(minval, t.val - prenode.val);
        }
        prenode = t;
        InOrder(t.right); 
    }

}
}