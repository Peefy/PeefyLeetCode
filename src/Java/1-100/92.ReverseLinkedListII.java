
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

    ListNode(int x) {
        val = x;
    }
}

class Solution {
    public ListNode reverseBetween(ListNode head, int m, int n) {
        if (m == n) 
            return head;
        ListNode dum = new ListNode(0);
        dum.next = head;
        ListNode pre = dum;
        for (int i = 1; i < m; i++){
            pre = pre.next;  
        }
        head = pre.next;
        for (int i = m; i < n; i++){
            ListNode nex = head.next;
            head.next = nex.next;
            nex.next = pre.next;
            pre.next = nex;
        }
        return dum.next;
    }
}
