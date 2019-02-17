
# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        tail = head
        previous = head
        prior = head
        i = 1
        while i < n and tail.next:
            tail = tail.next
            i += 1
        if i == n:
            while tail.next:
                prior = previous
                previous = previous.next
                tail = tail.next
        if head is previous:
            head = previous.next
        else:
            prior.next = previous.next
        return head
            

if __name__ == "__main__":
    solution = Solution()
    head = ListNode(1)
    head.next = ListNode(2)
    head.next.next = ListNode(3)
    head.next.next.next = ListNode(4)
    head.next.next.next.next = ListNode(5)
    print(solution.removeNthFromEnd(head, 2))
