
# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def middleNode(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        count = 0
        tmp = head
        while tmp is not None:
            tmp = tmp.next
            count += 1
        for i in range(count // 2):
            head = head.next
        return head


if __name__ == '__main__':
    solution = Solution()
    head = ListNode(1)
    head.next = ListNode(2)
    head.next.next = ListNode(3)
    head.next.next.next = ListNode(4)
    head.next.next.next.next = ListNode(5)    
    print(solution.middleNode(head))
    head.next.next.next.next.next = ListNode(6)
    print(solution.middleNode(head))
else:
    pass
