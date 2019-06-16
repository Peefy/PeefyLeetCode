
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.HashSet;

class ListNode {
    int val;
    ListNode next;
    ListNode(int x) {
        val = x;
        next = null;
    }
}

class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode h = new ListNode(0);
        h.next = head;
        ListNode p = head;
        ListNode q = h;
        while (n > 0) {
            p = p.next;
            n -= 1;
        }
        while(p != null){
            p = p.next;
            q = q.next;
        }
        q.next = q.next.next;
        return h.next;
    }
}
