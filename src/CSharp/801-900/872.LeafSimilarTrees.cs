using System;
using System.Collections.Generic;

namespace PeefyLeetCode.LeafSimilar
{
    public class TreeNode
    {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
    }

public class Solution {
    private void order(TreeNode node, List<int> list){
        if (node == null)
            return;
        if (node.left == null && node.right == null){
            list.Add(node.val);
            return;
        }
        order(node.left, list);
        order(node.right, list);
    }
    public bool LeafSimilar(TreeNode root1, TreeNode root2) {
        List<int> list1 = new List<int>();
        List<int> list2 = new List<int>();
        order(root1, list1);
        order(root2, list2);
        if (list1.Count != list2.Count)
            return false;
        for(int i = 0; i < list1.Count; i++){
            if (list1[i] != list2[i])
                return false;
        }
        return true;
    }
}

}