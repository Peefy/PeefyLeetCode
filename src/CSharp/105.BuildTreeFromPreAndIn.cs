
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.BuildTreeFromPreAndIn
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class Solution {
    public TreeNode BuildTree(int[] preorder, int[] inorder) {
        int n = preorder.Length;
        if (n == 0)
            return null;
        Dictionary<int, int> idx = new Dictionary<int, int>();
        for (int i = 0; i < n; i++) {
            idx.Add(inorder[i], i);
        }
        Stack<TreeNode> st = new Stack<TreeNode>();
        TreeNode root = new TreeNode(preorder[0]);
        TreeNode cur = root;
        for (int i = 1; i < n; i++) {
            st.Push(cur);
            int val = preorder[i];
            if (idx[val] < idx[cur.val]){
                cur.left = new TreeNode(val);
                cur = cur.left;
            }
            else{
                while (st.Count > 0 && idx[val] > idx[st.Peek().val]){
                    cur = st.Pop();
                }           
                cur.right = new TreeNode(val);
                cur = cur.right;
            }
        }
        return root;
    }
}
}