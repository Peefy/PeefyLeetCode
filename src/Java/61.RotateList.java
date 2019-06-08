
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;


public class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; } 
}


class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if (head == null) 
            return head;
        int n = 0;
        for (ListNode t = head; t != null; t = t.next)
            ++n;
        k %= n;
        if (k == 0) return head;
        ListNode fast = head, slow = head;
        for (int i = 0; i < k; ++i) fast = fast.next;
        while (fast.next != null){
            fast = fast.next;
            slow = slow.next;
        }       
        ListNode t = slow.next;
        fast.next = head;
        slow.next = null;
        return t;
    }
}
