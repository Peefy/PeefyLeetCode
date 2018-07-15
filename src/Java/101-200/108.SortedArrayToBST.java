
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

    public TreeNode newNode(TreeNode node, int[] nums, int start, int end){
        if (start > end) {
            return null;
        }
        int mid = (start + end) / 2;
        node = new TreeNode(0);
        node.val = nums[mid];
        node.left = newNode(node, nums, start, mid - 1);
        node.right = newNode(node, nums, mid + 1, end);
        return node;
    }

    public TreeNode sortedArrayToBST(int[] nums) {
        int n = nums.length;
        TreeNode root = null;
        if (n == 0) {
            return null;
        }
        return newNode(root, nums, 0, n - 1);
    }

}
