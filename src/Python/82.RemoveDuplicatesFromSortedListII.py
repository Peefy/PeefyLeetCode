
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        if not head:
            return head
        if head.next and head.val == head.next.val:
            while head.next != None and head.val == head.next.val:
                head = head.next
            return self.deleteDuplicates(head.next)
        else:
            head.next = self.deleteDuplicates(head.next)
        return head


if __name__ == "__main__":
    solution = Solution()
    node = ListNode(0)
    node.next = ListNode(1)
    node.next.next = ListNode(2)
    node.next.next.next = ListNode(2)
    node.next.next.next.next = ListNode(3)
    node.next.next.next.next.next = ListNode(4)
    print(solution.deleteDuplicates(node))
   