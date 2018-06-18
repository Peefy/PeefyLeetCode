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
    public ListNode deleteDuplicates(ListNode head) {
        if (head == null)
            return null;
        ListNode last = head;
        ListNode node = head.next;
        while (node != null) {
            if (node.val == last.val)
                last.next = node.next;
            else
                last = node;
            node = node.next;
        }
        return head;
    }
}
