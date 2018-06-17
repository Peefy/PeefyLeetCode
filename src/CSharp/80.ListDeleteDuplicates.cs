namespace PeefyLeetCode.ListDeleteDuplicates
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
                return null;
            ListNode last = head;
            ListNode node = head.next;
            while (node != null)
            {
                if (node.val == last.val)
                    last.next = node.next;
                else
                    last = node;
                node = node.next;
            }
            return head;
        }
    }
}