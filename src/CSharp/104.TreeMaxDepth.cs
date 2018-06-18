namespace PeefyLeetCode.TreeMaxDepth
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
        public int MaxDepth(TreeNode root)
        {
            return root == null ? 0 : 
                System.Math.Max(MaxDepth(root.left), MaxDepth(root.right)) + 1;
        }
    }
}