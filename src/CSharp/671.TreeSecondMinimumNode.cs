
using System;
using System.Collections.Generic;
using System.Text;

namespace PeefyLeetCode.FindSecondMinimumValue
{
    public class TreeNode
    {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
    }

public class Solution {
    int min = int.MaxValue;
    int secondMin = -1;
    public int FindSecondMinimumValue(TreeNode root) {
        if (root == null) {
            return -1;
        }
        if (root.val < min) {
            if (min != int.MaxValue) {
                secondMin = min;
            }
            min = root.val;
        } else if (root.val > min && (root.val < secondMin || secondMin == -1) ) {
            secondMin = root.val;
        }
        FindSecondMinimumValue(root.left);
        FindSecondMinimumValue(root.right);
        return secondMin;
    }
}
}
