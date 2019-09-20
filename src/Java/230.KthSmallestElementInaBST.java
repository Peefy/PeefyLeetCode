
import java.util.List;
import java.util.TreeSet;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;


public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}


class Solution {
    private int i = 0;
    private int val = 0;

    public int kthSmallest(TreeNode root, int k) {
        ldr(root, k);
        return val;
    }

    public void ldr(TreeNode root, int k) {
        if (root == null) {
            return;
        }
        ldr(root.left, k);
        if (k == ++i) {
            val = root.val;
        }
        ldr(root.right, k);
    }
}


