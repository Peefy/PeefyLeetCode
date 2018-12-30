
import java.awt.List;
import java.util.ArrayList;
import java.util.LinkedList;
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

    private void order(TreeNode node, LinkedList<Integer> list){
        if (node == null)
            return;
        if (node.left == null && node.right == null){
            list.add(node.val);
            return;
        }
        order(node.left, list);
        order(node.right, list);
    }

    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        LinkedList<Integer> list1 = new LinkedList<>();
        LinkedList<Integer> list2 = new LinkedList<>();
        order(root1, list1);
        order(root2, list2);
        if (list1.size() != list2.size())
            return false;
        for(int i = 0; i < list1.size(); i++){
            if (list1.get(i) != list2.get(i))
                return false;
        }
        return true;
    }
}
