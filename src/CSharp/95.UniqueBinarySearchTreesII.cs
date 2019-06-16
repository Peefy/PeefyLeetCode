
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.UniqueBinarySearchTreesII
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class Solution {
    public IList<TreeNode> GenerateTrees(int n) {
        if(n == 0)
            return new List<TreeNode>();
        return generateTrees(1, n);
    }
    public IList<TreeNode> generateTrees(int start, int end) {
        List<TreeNode> res = new List<TreeNode>();
        if(start > end){
            res.Add(null);
            return res;
        }
        for(int i = start;i <= end;i++){
            IList<TreeNode> subLeftTree = generateTrees(start,i-1);
            IList<TreeNode> subRightTree = generateTrees(i+1,end);
            foreach(TreeNode left in subLeftTree){
                foreach(TreeNode right in subRightTree){
                    TreeNode node = new TreeNode(i);
                    node.left = left;
                    node.right = right;
                    res.Add(node);
                }
            }                        
        }
        return res;
    }
}
}