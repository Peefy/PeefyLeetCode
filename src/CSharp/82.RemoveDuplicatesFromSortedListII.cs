
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.RemoveDuplicatesFromSortedListII
{

    public class ListNode
    {
        public int val;
        public ListNode next;
        public ListNode(int x) { val = x; }
    }
    public class Solution
    {



        public ListNode DeleteDuplicates(ListNode head)
        {
            if (head == null)
                return head;
            if (head.next != null && head.val == head.next.val)
            {
                while (head.next != null && head.val == head.next.val)
                    head = head.next;
                return DeleteDuplicates(head.next);
            }
            else
            {
                head.next = DeleteDuplicates(head.next);
            }
            return head;
        }
    }
}