import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; }
}

class Solution {
    public ListNode removeElements(ListNode head, int val) {
        while (head != null && head.val == val) {
            head = head.next;
        }
        ListNode node = head;
        ListNode lastnode = head;
        while (node != null) {
            if (node.val == val)
                lastnode.next = node.next;
            else
                lastnode = node;
            node = node.next;
        }
        return head;
    }
}
