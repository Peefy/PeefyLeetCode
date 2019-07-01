
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
    public Node next;
    public Node random;

    public Node() {}

    public Node(int _val,Node _next,Node _random) {
        val = _val;
        next = _next;
        random = _random;
    }
};

class Solution {
    public Node copyRandomList(Node head) {
        if (head == null) 
            return null;
        Node pre = new Node(0, null, null);
        Node cur = head;
        Node nex = null;
        while (cur != null){
            nex = cur.next;
            pre.next = cur;
            cur.next = new Node(cur.val, null, null);
            pre = cur.next;
            cur = nex;
        }
        cur = head;
        while (cur != null){
            cur.next.random = cur.random != null ? cur.random.next : null;
            cur = cur.next.next;
        }
        cur = head;
        Node res = head.next;
        while (cur.next != null){
            nex = cur.next;
            cur.next = nex.next;
            cur = nex;
        }
        return res;
    }
}

