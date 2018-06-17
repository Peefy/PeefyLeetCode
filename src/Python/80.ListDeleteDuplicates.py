
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head is None:
            return
        lastnode = head
        node = head.next
        while node != None:
            if node.val == lastnode.val:
                lastnode.next = node.next
            else:
                lastnode = node
            node = node.next
        return head

if __name__ == '__main__':
    solution = Solution()
    head = ListNode(1)
    head.next = ListNode(1)
    head.next.next = ListNode(1)
    print(solution.deleteDuplicates(head))
    print(head)

else:
    pass
