
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.PartitionList
{

    public class ListNode
    {
        public int val;
        public ListNode next;
        public ListNode(int x) { val = x; }
    }

    public class Solution
    {
        public ListNode Partition(ListNode head, int x)
        {
            ListNode node = head;
            ListNode smallstart = new ListNode(-1);
            ListNode bigstart = new ListNode(-1);
            ListNode smallnode = smallstart;
            ListNode bignode = bigstart;
            while (node != null)
            {
                if (node.val < x)
                {
                    smallnode.next = node;
                    smallnode = smallnode.next;
                }
                else
                {
                    bignode.next = node;
                    bignode = bignode.next;
                }
                node = node.next;
            }
            smallnode.next = bigstart.next;
            bignode.next = null;
            return smallstart.next;
        }
    }
}