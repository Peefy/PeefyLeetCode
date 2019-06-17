
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.TreePathSumII
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class Solution {
    public void dfs(TreeNode node, IList<IList<int>> ans, List<int> tmp, int s, int targetsum){
        tmp.Add(node.val);
        targetsum += node.val;
        if (node.left == null && node.right == null){
            if (targetsum == s)
                ans.Add(new List<int>(tmp));
            return;
        }
        if (node.left != null){
            dfs(node.left, ans, tmp, s, targetsum);
            tmp.RemoveAt(tmp.Count - 1);
        }
        if (node.right != null){
            dfs(node.right, ans, tmp, s, targetsum);
            tmp.RemoveAt(tmp.Count - 1);
        }
    }
    public IList<IList<int>> PathSum(TreeNode root, int sum) {
        IList<IList<int>> ans = new List<IList<int>>();
        if (root == null)
            return ans;
        List<int> tmp = new List<int>();
        dfs(root, ans, tmp, sum, 0);
        return ans;
    }
}
}