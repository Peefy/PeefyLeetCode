
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.UniqueBinarySearchTrees
{

public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class Solution {
    public int NumTrees(int n) {
        if(n <= 1)
            return 1;
        long res = 1;
        for(int i = 1; i <= n; i++){
            res = res * (4 * i - 2) / (i + 1);
        }
        return (int) res;
    }
}
}