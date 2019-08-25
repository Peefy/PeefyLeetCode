
using System;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.InsertionSortList
{
public class ListNode {
    public int val;
    public ListNode next;
    public ListNode(int x) {
        val = x;
        next = null;
   }
}

public class Solution {
    public ListNode InsertionSortList(ListNode head) {
        ListNode dummy = new ListNode(0); 
        while(head != null){
            ListNode cur = dummy;
            ListNode next = head.next;
            while(cur.next != null && cur.next.val < head.val){
                cur = cur.next;
            }
            head.next = cur.next;
            cur.next = head;
            head = next;
        }
        return dummy.next;
    }
}

}


