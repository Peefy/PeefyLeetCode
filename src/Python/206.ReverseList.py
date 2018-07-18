# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        stack = []
        node = head
        while node != None:
            stack.append(node)
            node = node.next
        if len(stack) == 0:
            return None
        tail = stack.pop()
        node = tail
        head.next = None
        while len(stack) > 0:
            stacknode = stack.pop()
            node.next = stacknode
            node = stacknode
        return tail

if __name__ == '__main__':
    solution = Solution()
    head = ListNode(1)
    head.next = ListNode(2)
    head.next.next = ListNode(6)
    head.next.next.next = ListNode(4)
    head.next.next.next.next = ListNode(5)
    head.next.next.next.next.next = ListNode(6)
    print(solution.reverseList(head))
else:
    pass
