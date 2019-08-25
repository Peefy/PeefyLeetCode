
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.TriangleMinPath
{

public class Node {
    public int val;
    public Node left;
    public Node right;
    public Node next;

    public Node() {}

    public Node(int _val,Node _left,Node _right,Node _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};

public class Solution {
    public int MinimumTotal(IList<IList<int>> triangle) {
        int n = triangle.Count;
        if (n == 0)
            return 0;
        int[] res = new int[n];
        for (int i = 0; i < n; i++) {
            res[i] = triangle[n - 1][i];
        }
        for (int i = n - 2; i > -1; i--) {
            int ni = triangle[i].Count;
            for (int j = 0; j < ni; j++) {
                res[j] = Math.Min(res[j], res[j + 1]) + triangle[i][j];
            }
        }            
        return res[0];
    }
}
}