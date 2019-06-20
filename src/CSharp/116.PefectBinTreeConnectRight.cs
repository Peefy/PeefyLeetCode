
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.PefectBinTreeConnectRight
{

public class Node {
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

public class Solution {
    public Node Connect(Node root) {
        if (root == null)
            return null;
        List<Node> stack = new List<Node>();
        stack.Add(root);
        while (stack.Count > 0){
            List<Node> tmp = new List<Node>();
            Node lastnode = null;
            foreach (Node node in stack){
                node.next = lastnode;
                lastnode = node;
                if (node.right != null)
                    tmp.Add(node.right);
                if (node.left != null)
                    tmp.Add(node.left);
            }
            stack = tmp;
        }
        return root;
    }
}
}