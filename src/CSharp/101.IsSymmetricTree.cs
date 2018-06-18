namespace PeefyLeetCode.IsSymmetricTree
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
        public bool IsSameNode(TreeNode left, TreeNode right)
        {
            if (left == null && right == null)
                return true;
            if (left == null && right != null)
                return false;
            if (left != null && right == null)
                return false;
            return left.val == right.val &&
                   IsSameNode(left.left, right.right) &&
                   IsSameNode(left.right, right.left);
        }
        public bool IsSymmetric(TreeNode root)
        {
            if (root == null)
                return true;
            return IsSameNode(root.left, root.right);
        }
    }
}