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
    public ListNode reverseList(ListNode head) {
        ListNode node = head;
        ListNode pre = null;
        while (node != null) {
            ListNode next = node.next;
            node.next = pre;
            pre = node;
            node = next;
        }
        return pre;
    }

    public ListNode findMiddle(ListNode head){
        ListNode slow = head;
        ListNode fast = head.next;
        while (fast != null && fast.next != null)
        {
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }

    public boolean isPalindrome(ListNode head) {
        if (head == null) {
            return true;
        }
        ListNode middle = findMiddle(head);
        ListNode tail = middle.next;
        middle.next = null;
        ListNode p = head;
        ListNode second = reverseList(tail);
        ListNode q = second;
        while (p != null && q != null){
            if (p.val != q.val)
                return false;
            p = p.next;
            q = q.next;
        }
        return true;
    }
}
