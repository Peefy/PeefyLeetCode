
import java.awt.List;
import java.lang.annotation.Retention;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.PriorityQueue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;

class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val,List<Node> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
    public List<List<Integer>> levelOrder(Node root) {
        LinkedList<List<Integer>> r = new LinkedList<List<Integer>>();
        LinkedBlockingQueue<Node> q = new LinkedBlockingQueue<>();
        if (root == null)
            return r;
        q.add(root);
        while (q.isEmpty() == false) {
            LinkedList<Integer> child = new LinkedList<>();
            int n = q.size();
            for (int i = 0; i < n; i++) {
                Node node = q.poll();
                child.add(node.val);
                for(Node nn : node.children){
                    q.add(nn);
                }
            }
            r.add(child);
        }
        return r;
    }
}

    