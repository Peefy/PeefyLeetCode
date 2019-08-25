
using System;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.ReorderList
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
    public void ReorderList(ListNode head) {
                if (head == null || head.next == null)
            return;
        ListNode p1 = head;
        ListNode p2 = head;
        // 找到链表的一半
        while (p2.next != null && p2.next.next != null) {
            p1 = p1.next;
            p2 = p2.next.next;
        }
        // 将链表分为两段
        p2 = p1.next;
        p1.next = null;
        p1 = head;
        // 将后半段进行链表的翻转
        ListNode head2 = p2;
        ListNode next2;
        while (p2.next != null) {
            next2 = p2.next;
            p2.next = next2.next;
            next2.next = head2;
            head2 = next2;
        }
        p2 = head2;
        // 两条链表进行合并
        ListNode next1;
        while (p2 != null) {
            next1 = p1.next;
            next2 = p2.next;
            p1.next = p2;
            p2.next = next1;
            p1 = next1;
            p2 = next2;
        }
    }
}

}


