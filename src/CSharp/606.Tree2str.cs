
using System;
using System.Collections.Generic;
using System.Text;

namespace PeefyLeetCode.Tree2str
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
        public string Tree2str(TreeNode t)
        {
            StringBuilder result = new StringBuilder();
            tree2str(t, result);

            return result.ToString();
        }
        void tree2str(TreeNode t, StringBuilder result)
        {

            if (t == null)
            {
                return;
            }

            result.Append(t.val);

            if (t.left != null)
            {
                result.Append("(");
                tree2str(t.left, result);
                result.Append(")");
            }

            if (t.right != null)
            {

                if (t.left == null)
                {
                    result.Append("()(");
                }
                else
                {
                    result.Append("(");
                }

                tree2str(t.right, result);
                result.Append(")");
            }

        }
    }
}
