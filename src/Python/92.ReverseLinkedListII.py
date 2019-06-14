
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    def reverseBetween(self, head: ListNode, m: int, n: int) -> ListNode:
        if m == n:
            return head
        i = 1
        node = head
        beginnode = head
        tmp = None
        lastnode = None
        nextnode = None
        while node is not None:
            if i < m:
                lastnode = node
                nextnode = node.next
            elif i == m:
                beginnode = node
                nextnode = node.next
                node.next = tmp  
                tmp = node
            elif i < n:
                nextnode = node.next
                node.next = tmp  
                tmp = node
            elif i == n:
                beginnode.next = node.next
                node.next = tmp 
                if lastnode is None:
                    return node
                else:  
                    lastnode.next = node
                    return head
            i += 1
            node = nextnode
        return head

if __name__ == "__main__":
    solution = Solution()
    node = ListNode(1)
    node.next = ListNode(2)
    node.next.next = ListNode(3)
    node.next.next.next = ListNode(4)
    node.next.next.next.next = ListNode(5)
    node.next.next.next.next.next = ListNode(6)
    print(solution.reverseBetween(node, 2, 4))
   