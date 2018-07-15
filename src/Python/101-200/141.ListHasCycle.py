
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        curr = head
        while curr is not None:
            nextnode = curr.next
            if nextnode is head:
                return True
            curr.next = head
            curr = nextnode
        return False

if __name__ == '__main__':
    solution = Solution()
    node = ListNode(1)
    node.next = ListNode(2)
    node.next.next = ListNode(3)
    node.next.next.next = node.next
    print(solution.hasCycle(node))
else:
    pass
