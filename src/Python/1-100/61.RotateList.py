
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def rotateRight(self, head: ListNode, k: int) -> ListNode:
        if head is None or k == 0:
            return head
        n = 0
        node = head
        lastnode = None
        while node is not None:
            lastnode = node
            node = node.next
            n += 1
        k %= n
        if k == 0:
            return head
        node2 = head
        noderotatebefore = None
        i = 0
        while i < n - k:
            noderotatebefore = node2
            node2 = node2.next
            i += 1
        noderotatebefore.next = None
        lastnode.next = head   
        return node2 

if __name__ == "__main__":
    solution = Solution()
    node = ListNode(1)
    node.next = ListNode(2)
    node.next.next = ListNode(3)
    node.next.next.next = ListNode(4)
    node.next.next.next.next = ListNode(5)
    print(solution.rotateRight(node, 2))

   