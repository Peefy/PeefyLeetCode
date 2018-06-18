namespace PeefyLeetCode.MergeTwoSortedLists
{

   public class ListNode 
   {
        public int val;
        public ListNode next;
        public ListNode(int x) { val = x; }
    }

    public class Solution 
    {
        public ListNode MergeTwoLists(ListNode l1, ListNode l2) {
            var r = new ListNode(-1);
            var head = r;
            while(l1 != null && l2 != null)
            {
                if(l1.val < l2.val)
                {
                    r.next = l1;
                    l1 = l1.next;
                }
                else
                {
                    r.next = l2;
                    l2 = l2.next;
                }
                r = r.next;
            }
            if(l1 == null)
            {
                r.next = l2;
            }
            else
            {
                r.next = l1;
            }
            return head.next;
        }
    }
}