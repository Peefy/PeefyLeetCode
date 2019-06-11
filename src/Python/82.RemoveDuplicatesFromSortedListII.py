
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        rnode = head
        node = head.next
        lastnode = head
        while node is not None:     
            if lastnode.val == node.val:
                while node is not None:
                    if node.val != lastnode.val:
                        rnode = node
                        lastnode = node
                        rnode = rnode.next
                        break
                    node = node.next
            elif lastnode.val != node.val:
                rnode.next = node
                rnode = rnode.next
                lastnode = node   
            node = node.next
        return rnode


if __name__ == "__main__":
    solution = Solution()
    node = ListNode(0)
    node.next = ListNode(1)
    node.next.next = ListNode(2)
    node.next.next.next = ListNode(2)
    node.next.next.next.next = ListNode(3)
    node.next.next.next.next.next = ListNode(4)
    print(solution.deleteDuplicates(node))
   