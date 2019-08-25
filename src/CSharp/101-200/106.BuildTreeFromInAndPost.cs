
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.BuildTreeFromInAndPost
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class Solution {
    public TreeNode BuildTree(int[] inorder, int[] postorder) {
        int n = postorder.Length;
        if (n == 0)
            return null;
        Dictionary<int, int> idx = new Dictionary<int, int>();
        for (int i = 0; i < n; i++) {
            idx.Add(inorder[i], i);
        }
        Stack<TreeNode> st = new Stack<TreeNode>();
        TreeNode root = new TreeNode(postorder[n - 1]);
        TreeNode cur = root;
        for (int i = n - 2; i >= 0; i--) {
            st.Push(cur);
            int val = postorder[i];
            if (idx[val] > idx[cur.val]){
                cur.right = new TreeNode(val);
                cur = cur.right;
            }
            else{
                while (st.Count > 0 && idx[val] < idx[st.Peek().val]){
                    cur = st.Pop();
                }           
                cur.left = new TreeNode(val);
                cur = cur.left;
            }
        }
        return root;
    }
}
}