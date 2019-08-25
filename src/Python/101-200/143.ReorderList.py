
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution(object):
    def reverseList(self, head):
        prev = None
        while head is not None:
            next = head.next
            head.next = prev
            prev = head
            head = next
        return prev


    def reorderList(self, head):
        """
        :type head: ListNode
        :rtype: None Do not return anything, modify head in-place instead.
        """
        if head is None:
            return 
        slow = head
        fast = head.next
        while fast is not None and fast.next is not None:
            slow = slow.next
            fast = fast.next.next
        right = self.reverseList(slow.next)
        slow.next = None
        left = head
        while right is not None:
            next = right.next
            right.next = left.next
            left.next = right
            right = next
            left = left.next.next
        return left

if __name__ == "__main__":
    solution = Solution()
    nodes = [ListNode(1), ListNode(2), ListNode(3), ListNode(4), ListNode(5)]
    nodes[0].next = nodes[1]
    nodes[1].next = nodes[2]
    nodes[2].next = nodes[3]
    nodes[3].next = nodes[4]
    print(solution.reorderList(nodes[0]))
