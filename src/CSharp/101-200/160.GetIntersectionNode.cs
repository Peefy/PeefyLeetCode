namespace PeefyLeetCode.GetIntersectionNode
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
        public ListNode GetIntersectionNode(ListNode headA, ListNode headB)
        {
            var tailA = headA;
            var tailB = headB;
            var tailALength = 0;
            var tailBLength = 0;
            while (tailA != null)
            {
                tailA = tailA.next;
                ++tailALength;
            }
            while (tailB != null)
            {
                tailB = tailB.next;
                ++tailBLength;
            }
            if (tailA != tailB)
                return null;
            var nodeA = headA;
            var nodeB = headB;
            if (tailALength > tailBLength)
            {
                var sub = tailALength - tailBLength;
                for (var i = 0;i < sub;++i)
                {
                    nodeA = nodeA.next;
                }
            }
            else if (tailALength < tailBLength)
            {
                var sub = tailBLength - tailALength;
                for (var i = 0; i < sub; ++i)
                {
                    nodeB = nodeB.next;
                }
            }
            while (nodeA != null)
            {
                if (nodeA == nodeB)
                    return nodeA;
                nodeA = nodeA.next;
                nodeB = nodeB.next;
            }
            return null;
        }
    }
}