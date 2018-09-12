import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;

public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}

class Solution {
    private int count = 0;
    public void dfs(TreeNode p, int sum, int pathSum, HashMap<Integer, Integer> preDict) {
        if (p != null) {
            pathSum += p.val;
            Integer temp = preDict.get(pathSum - sum);
            count += (temp == null ? 0 : temp);
            if(preDict.containsKey(pathSum) == false){
                preDict.put(pathSum, 1);
            }else{
                int c = preDict.get(pathSum) + 1;
                preDict.remove(pathSum);
                preDict.put(pathSum, c);
            }
            dfs(p.left, sum, pathSum, preDict);
            dfs(p.right, sum, pathSum, preDict);
            int c = preDict.get(pathSum) - 1;
            preDict.remove(pathSum);
            preDict.put(pathSum, c);
        }
    }

    public int pathSum(TreeNode root, int sum) {
        count = 0;
        HashMap<Integer, Integer> preDict = new HashMap<>();
        preDict.put(0, 1);
        dfs(root, sum, 0, preDict);
        return count;
    }
}
