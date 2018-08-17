using System.Collections.Generic;

namespace PeefyLeetCode.BinaryTreePaths
{
    public class TreeNode
    {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
    }

public class Solution {
    public IList<string> BinaryTreePaths(TreeNode root) {
        var tostr = "->";
        List<string> l = new List<string>();
        if (root == null) {
            return l;
        }
        if (root.left == null && root.right == null){
            l.Add(root.val.ToString());
            return l;
        }
        var ll = BinaryTreePaths(root.left);
        var lr = BinaryTreePaths(root.right);
        for (int i = 0; i < ll.Count; i++)
        {
            l.Add(root.val.ToString() + tostr + ll[i]);
        }
        for (int i = 0; i < lr.Count; i++)
        {
            l.Add(root.val.ToString() + tostr + lr[i]);
        }
        return l;
    }
}

}