namespace PeefyLeetCode.ListHasCycle
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
    public class Solution
    {
        public bool HasCycle(ListNode head)
        {
            var slow = head;
            var fast = head;
            while (slow != null && fast != null)
            {
                if (fast.next == null)
                    return false;
                if (fast.next.next == null)
                    return false;
                if (fast.next == slow || fast.next.next == slow)
                    return true;
                slow = slow.next;
                fast = fast.next.next;
            }
            return false;
        }
    }
}