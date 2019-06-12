
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    def partition(self, head: ListNode, x: int) -> ListNode:
        node = head
        smallstart = ListNode(-1)
        bigstart = ListNode(-1)
        smallnode = smallstart
        bignode = bigstart
        while node is not None:
            if node.val < x:
                smallnode.next = node
                smallnode = smallnode.next
            else:
                bignode.next = node
                bignode = bignode.next
            node = node.next
        smallnode.next = bigstart.next
        bignode.next = None            
        return smallstart.next


if __name__ == "__main__":
    solution = Solution()
    node = ListNode(1)
    node.next = ListNode(4)
    node.next.next = ListNode(3)
    node.next.next.next = ListNode(2)
    node.next.next.next.next = ListNode(5)
    node.next.next.next.next.next = ListNode(2)
    print(solution.partition(node, 3))
   