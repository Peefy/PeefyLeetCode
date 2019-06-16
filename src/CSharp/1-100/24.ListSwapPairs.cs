namespace PeefyLeetCode.listSwapPairs
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
    public ListNode SwapPairs(ListNode head) {
        if (head != null && head.next != null){
            head.next.next = SwapPairs(head.next.next);
            ListNode second = head.next;
            head.next = second.next;
            second.next = head;
            return second;
        }
        return head;
    }
}
}