namespace PeefyLeetCode.ReverseList
{

    public class ListNode
    {
        public int val;
        public ListNode next;
        public ListNode(int x) { val = x; }
    }
public class Solution {
    public ListNode ReverseList(ListNode head) {
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
}
}