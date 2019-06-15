
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.TreeInorderTraversal
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class Solution {
    public IList<int> InorderTraversal(TreeNode root) {
        List<int> res = new List<int>();
        if (root == null)
            return res;
        Stack<Boolean> stackVisited = new Stack<bool>();
        Stack<TreeNode> stackNode = new Stack<TreeNode>();
        stackVisited.Push(false);
        stackNode.Push(root);
        while (stackNode.Count > 0){
            TreeNode cur_root = stackNode.Pop();
            bool vis = stackVisited.Pop();
            if (vis == true)
                res.Add(cur_root.val);                
            else{
                if (cur_root.right != null){
                    stackNode.Push(cur_root.right);
                    stackVisited.Push(false);
                }          
                stackNode.Push(cur_root);
                stackVisited.Push(true);
                if (cur_root.left != null){
                    stackNode.Push(cur_root.left);
                    stackVisited.Push(false);
                }             
            }        
        }
        return res;
    }
}
}