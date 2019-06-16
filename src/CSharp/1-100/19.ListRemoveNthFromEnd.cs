namespace PeefyLeetCode.RemoveNthFromEnd
{
    public class ListNode
    {
        public int val;
        public ListNode next;
        public ListNode(int x)
        {
            val = x;
            next = null;
        }
    }
public class Solution {
    public ListNode RemoveNthFromEnd(ListNode head, int n) {
        ListNode h = new ListNode(0);
        h.next = head;
        ListNode p = head;
        ListNode q = h;
        while (n > 0) {
            p = p.next;
            n -= 1;
        }
        while(p != null){
            p = p.next;
            q = q.next;
        }
        q.next = q.next.next;
        return h.next;
    }
}
}