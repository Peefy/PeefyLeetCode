using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.RotateList
{
    public class ListNode
    {
        public int val; 
        public ListNode next; 
        public ListNode(int x) { val = x; }
    }

public class Solution {
    public ListNode RotateRight(ListNode head, int k) {
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
        ListNode r = slow.next;
        fast.next = head;
        slow.next = null;
        return r;
    }
}
}