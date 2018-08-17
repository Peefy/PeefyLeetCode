# Definition for singly-linked list.

from copy import deepcopy

class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        stack = []
        node = head
        count = 0
        while node != None:
            stack.append(node.val)
            node = node.next
            count += 1
        for i in range(count):
            if stack[i] != stack[count - i - 1]:
                return False
        return True

if __name__ == '__main__':
    solution = Solution()
    head = ListNode(1)
    head.next = ListNode(2)
    head.next.next = ListNode(2)
    head.next.next.next = ListNode(3)
    print(solution.isPalindrome(head))
else:
    pass
