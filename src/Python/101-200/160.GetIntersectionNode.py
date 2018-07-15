
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def getIntersectionNode(self, headA, headB):
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """
        tailA = headA
        tailALength = 0
        tailB = headB
        tailBLength = 0
        while tailA is not None:
            tailA = tailA.next
            tailALength += 1
        while tailB is not None:
            tailB = tailB.next
            tailBLength += 1
        if tailA != tailB:
            return None
        nodeA = headA
        nodeB = headB
        if tailALength > tailBLength:
            sub = tailALength - tailBLength
            for i in range(sub):
                nodeA = nodeA.next
        else:
            sub = tailBLength - tailALength
            for i in range(sub):
                nodeB = nodeB.next
        while nodeA is not None:
            if nodeA == nodeB:
                return nodeA
            nodeA = nodeA.next
            nodeB = nodeB.next

if __name__ == '__main__':
    solution = Solution()
    node = ListNode(1)
    node.next = ListNode(2)
    node.next.next = ListNode(3)
    node.next.next.next = ListNode(4)
    head2 = ListNode(1)
    head2.next = ListNode(2)
    head2.next.next = node.next.next
    print(solution.getIntersectionNode(node, head2).val)
else:
    pass
