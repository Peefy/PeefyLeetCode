
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.ReverseListBetween
{

    public class ListNode
    {
        public int val;
        public ListNode next;
        public ListNode(int x) { val = x; }
    }

    public class Solution
    {
        public ListNode ReverseBetween(ListNode head, int m, int n)
        {
            if (m == n)
                return head;
            ListNode dum = new ListNode(0);
            dum.next = head;
            ListNode pre = dum;
            for (int i = 1; i < m; i++)
            {
                pre = pre.next;
            }
            head = pre.next;
            for (int i = m; i < n; i++)
            {
                ListNode nex = head.next;
                head.next = nex.next;
                nex.next = pre.next;
                pre.next = nex;
            }
            return dum.next;
        }
    }
}