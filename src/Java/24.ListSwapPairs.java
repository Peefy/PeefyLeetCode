
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
    public ListNode swapPairs(ListNode head) {
        if (head != null && head.next != null){
            head.next.next = swapPairs(head.next.next);
            ListNode second = head.next;
            head.next = second.next;
            second.next = head;
            return second;
        }
        return head;
    }
}
