
class Node:
    def __init__(self, val, next, random):
        self.val = val
        self.next = next
        self.random = random


class Solution:
    def copyRandomList(self, head: 'Node') -> 'Node':
        if not head: return
        pre, cur = Node(0, None, None), head
        while cur:
            nex = cur.next
            pre.next = cur
            cur.next = Node(cur.val, None, None)
            pre = cur.next
            cur = nex
        cur = head
        while cur: 
            cur.next.random = cur.random.next if cur.random else None
            cur = cur.next.next
        cur, res = head, head.next
        while cur.next: 
            nex = cur.next
            cur.next = nex.next
            cur = nex
        return res


if __name__ == "__main__":
    solution = Solution()
    node1 = Node(1, None, None)
    node2 = Node(2, None, None)
    node1.next = node2
    node1.random = node2
    node2.random = node2
    print(solution.copyRandomList(node1))

        