
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;

public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}

class Solution {
    public int maxDepth(TreeNode root) {
        return root == null ? 0 : Math.max(maxDepth(root.left), maxDepth(root.right)) + 1;
    }

    public List<List<Integer>> levelOrderBottom(TreeNode root) {
        ArrayList<List<Integer>> result = new ArrayList<List<Integer>>();
        if (root == null)
                return result;
            int n = this.maxDepth(root);
            for (int i = 0; i < n; i++)
            {
                result.add(new ArrayList<Integer>());
            }
            --n;
            ArrayList<TreeNode> queue = new ArrayList<TreeNode>();
            queue.add(root);
            while (queue.isEmpty() == false && n >= 0)
            {
                int count = queue.size();
                for (int i = 0; i < count; i++)
                {
                    TreeNode node = queue.get(0);
                    queue.remove(0);
                    result.get(n).add(node.val);
                    if (node.left != null)
                        queue.add(node.left);
                    if (node.right != null)
                        queue.add(node.right);
                }
                --n;
            }
            return result;
    }
}
