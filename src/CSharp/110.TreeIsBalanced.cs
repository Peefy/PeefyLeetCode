namespace PeefyLeetCode.TreeIsBalanced
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
        public int GetHeight(TreeNode node)
        {
            if (node == null)
                return 0;
            int left = GetHeight(node.left);
            int right = GetHeight(node.right);
            if (left == -1 || right == -1 || System.Math.Abs(left - right) > 1)
                return -1;
            return System.Math.Max(left, right) + 1;
        }
        public bool IsBalanced(TreeNode root)
        {
            if (root == null)
                return true;
            return GetHeight(root) != -1;
        }
    }

}