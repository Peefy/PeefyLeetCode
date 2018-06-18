namespace PeefyLeetCode.IsSameTree
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
        public bool IsSameTree(TreeNode p, TreeNode q)
        {
            if (p == null && q == null)
                return true;
            if (p != null && q == null)
                return false;
            if (p == null && q != null)
                return false;
            return p.val == q.val &&
                IsSameTree(p.left, q.left) &&
                IsSameTree(p.right, q.right);
        }
    }
}