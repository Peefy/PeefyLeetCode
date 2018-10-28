using System;
using System.Collections.Generic;

namespace PeefyLeetCode.FindModeInBSTree
{
    public class TreeNode
    {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
    }

public class Solution 
{
    List<int> res = new List<int>();
    bool first;
    int val;
    int c;
    int max = -int.MaxValue;
    void InOrder(TreeNode root){
        if(root == null)
            return;
        InOrder(root.left);
        TreeNode cur = root;
        if(first == true) {
            val = cur.val;
            c = 1;
            first = false;
        }
        else {
            if(val == cur.val)
                ++c;
            else {
                val = cur.val;
                c = 1; 
            }
        }
        if(c == max)
            res.Add(cur.val);
        else if(c > max) 
        {
                max = c;
                res.Clear();
                res.Add(cur.val);
        }
        InOrder(root.right);
    }
    public int[] FindMode(TreeNode root) {
        res.Clear();
        if(root == null)
            return res.ToArray();
        first = true;
        c = 0;
        val = 0; 
        InOrder(root);
        return res.ToArray();
    }
}
}