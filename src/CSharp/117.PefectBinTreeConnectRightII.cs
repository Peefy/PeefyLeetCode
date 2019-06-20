
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.PefectBinTreeConnectRightII
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

class Solution {
    public Node Connect(Node root) {
        if (root == null)
            return null;
        Node dummy = new Node(-1, null, null, null);
        Node pre = dummy;
        Node head = root;
        while (root != null) {
            if (root.left != null) {
                pre.next = root.left;
                pre = pre.next;
            }
            if (root.right != null) {
                pre.next = root.right;
                pre = pre.next;
            }
            root = root.next;
            if (root == null) {
                pre = dummy;
                root = dummy.next;
                dummy.next = null;
            }
        }
        return head;
    }
}
}