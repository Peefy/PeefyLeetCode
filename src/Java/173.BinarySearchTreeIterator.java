
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;


class BSTIterator {
    private LinkedList <TreeNode> stack = new LinkedList<TreeNode>();
    public BSTIterator(TreeNode root) {
        if (root == null){
            return;
        }
        stack.push(root);
        while (root.left != null){
            stack.push(root.left);
            root = root.left;
        }
    }

    /**
     * @return the next smallest number
     */
    public int next() {
        TreeNode node = this.stack.pop();
        if (node.right != null){
            this.stack.push(node.right);
            TreeNode t = node.right;
            while (t.left != null){
                stack.push(t.left);
                t = t.left;
            }
        }
        return node.val;
    }

    /**
     * @return whether we have a next smallest number
     */
    public boolean hasNext() {
        return !this.stack.isEmpty();
    }
}

