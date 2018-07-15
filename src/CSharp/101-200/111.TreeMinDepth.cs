namespace PeefyLeetCode.TreeMinDepth
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
        public int MinDepth(TreeNode root)
        {
            if (root == null)
            {
                return 0;
            }
            else if (root.left != null && root.right == null)
            {
                return MinDepth(root.left) + 1;
            }
            else if (root.left == null && root.right != null)
            {
                return MinDepth(root.right) + 1;
            }
            return System.Math.Min(MinDepth(root.left), MinDepth(root.right)) + 1;
        }
    }

}