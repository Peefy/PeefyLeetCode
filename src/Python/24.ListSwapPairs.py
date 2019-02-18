# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def swapPairs(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head is not None and head.next is not None:
            head.next.next = self.swapPairs(head.next.next)
            second = head.next
            head.next = second.next
            second.next = head
            return second
        return head
            

if __name__ == "__main__":
    solution = Solution()
    head = ListNode(1)
    head.next = ListNode(2)
    head.next.next = ListNode(3)
    head.next.next.next = ListNode(4)
    print(solution.swapPairs(head))