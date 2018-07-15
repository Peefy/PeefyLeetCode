namespace PeefyLeetCode.SortedArrayToBST
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

        public TreeNode NewNode(TreeNode node, int[] nums, int start, int end)
        {
            if (start > end)
            {
                return null;
            }
            int mid = (start + end) / 2;
            node = new TreeNode(0);
            node.val = nums[mid];
            node.left = NewNode(node, nums, start, mid - 1);
            node.right = NewNode(node, nums, mid + 1, end);
            return node;
        }

        public TreeNode SortedArrayToBST(int[] nums)
        {
            int n = nums.Length;
            TreeNode root = null;
            if (n == 0)
            {
                return null;
            }
            return NewNode(root, nums, 0, n - 1);
        }

    }
}