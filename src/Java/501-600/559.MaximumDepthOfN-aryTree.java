


import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;

// Definition for a Node.
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
    public int maxDepth(Node root) {
        if (root == null) {
            return 0;
        }
        LinkedList<Node> childlist = new LinkedList<>();
        childlist.addAll(root.children);
        int count = 1;
        while (childlist.size() != 0) {
            count += 1;
            LinkedList<Node> newlist = new LinkedList<>();
            for (Node child : childlist) {
                newlist.addAll(child.children);
            }
            childlist = newlist;
        }
        return count;
    }
}
