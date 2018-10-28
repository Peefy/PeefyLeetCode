using System;
using System.Collections.Generic;

namespace PeefyLeetCode.PathSumIII
{
    public class TreeNode
    {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
    }

public class Solution {
private int count = 0;
    public void dfs(TreeNode p, int sum, int pathSum, Dictionary<int, int> preDict) {
        if (p != null) {
            pathSum += p.val;
            if (preDict.TryGetValue(pathSum - sum, out var temp) == true)
            {
                count += temp;
            }
            if(preDict.ContainsKey(pathSum) == false){
                preDict.Add(pathSum, 1);
            }else{
                preDict[pathSum] = preDict[pathSum] + 1;
            }
            dfs(p.left, sum, pathSum, preDict);
            dfs(p.right, sum, pathSum, preDict);
            preDict[pathSum] = preDict[pathSum] - 1;
        }
    }

    public int PathSum(TreeNode root, int sum) {
        count = 0;
        Dictionary<int, int> preDict = new Dictionary<int, int>();
        preDict.Add(0, 1);
        dfs(root, sum, 0, preDict);
        return count;
    }
}

}