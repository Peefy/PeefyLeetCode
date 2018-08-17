namespace PeefyLeetCode.ListDeleteNode
{

    public class ListNode
    {
        public int val;
        public ListNode next;
        public ListNode(int x) { val = x; }
    }
    public class Solution
    {
        public ListNode RemoveElements(ListNode head, int val)
        {
            while (head != null && head.val == val)
            {
                head = head.next;
            }
            ListNode node = head;
            ListNode lastnode = head;
            while (node != null)
            {
                if (node.val == val)
                    lastnode.next = node.next;
                else
                    lastnode = node;
                node = node.next;
            }
            return head;
        }
    }
}