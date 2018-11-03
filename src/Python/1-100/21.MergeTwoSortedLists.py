
# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        r = ListNode(0)
        start = r
        while l1 is not None and l2 is not None:
            if l1.val < l2.val:
                r.next = ListNode(l1.val)
                l1 = l1.next
            else:
                r.next = ListNode(l2.val)
                l2 = l2.next
            r = r.next
        if l1 is None:
            r.next = l2
        else:
            r.next = l1
        return start.next

def main():
    l1 = ListNode(1)
    l1.next = ListNode(3)
    l2 = ListNode(2)
    l2.next = ListNode(4)
    print(Solution().mergeTwoLists(l1, l2).val)

if __name__ == '__main__':
    main()
