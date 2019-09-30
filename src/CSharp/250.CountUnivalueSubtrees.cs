
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.CountUnivalueSubtrees
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) {
        val = x;
    } 
}


public class Solution {
    bool dfs(TreeNode root, int pre, Int32 ans) {
        if (root == null) 
            return true;
        bool flag1 = dfs(root.left, root.val, ans);
        bool flag2 = dfs(root.right, root.val, ans);
        if (flag1 && flag2) 
            ans++;
        return (root.val == pre) && flag1 && flag2;
    }

    public int countUnivalSubtrees(TreeNode root) {
        if (root == null) 
            return 0;
        Int32 ans = 0;
        dfs(root, root.val, ans);
        return ans;
    }
}

}