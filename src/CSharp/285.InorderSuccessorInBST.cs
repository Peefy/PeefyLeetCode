
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.InorderSuccessorInBST
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class Solution {
    public TreeNode InorderSuccessor(TreeNode root, TreeNode p) {
        TreeNode cur = root;
        TreeNode pre = null;
        Stack<TreeNode> s = new Stack<TreeNode>();
        while (cur != null || s.Count > 0) {
            while (cur != null) {
                s.Push(cur);
                cur = cur.left;
            }
            if (s.Count > 0) {
                cur = s.Peek();
                if (pre == p)
                    return cur;
                s.Pop();
                pre = cur;
                cur = cur.right;
            }
        }
        return null;
    }
}

}