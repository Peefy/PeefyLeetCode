
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class Node {
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

class Solution {
    public Node connect(Node root) {
        if (root == null)
            return null;
        List<Node> stack = new ArrayList<>();
        stack.add(root);
        while (stack.size() > 0){
            List<Node> tmp = new ArrayList<>();
            Node lastnode = null;
            for (Node node : stack){
                node.next = lastnode;
                lastnode = node;
                if (node.right != null)
                    tmp.add(node.right);
                if (node.left != null)
                    tmp.add(node.left);
            }
            stack = tmp;
        }
        return root;
    }
}
