
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    def insertionSortList(self, head):
        dummy = ListNode(0)
        while head is not None:
            cur = dummy
            next = head.next
            while cur.next is not None and cur.next.val < head.val:
                cur = cur.next
            head.next = cur.next
            cur.next = head
            head = next
        return dummy.next


if __name__ == "__main__":
    solution = Solution()
    nodes = [ListNode(5), ListNode(4), ListNode(3), ListNode(2), ListNode(1)]
    nodes[0].next = nodes[1]
    nodes[1].next = nodes[2]
    nodes[2].next = nodes[3]
    nodes[3].next = nodes[4]
    print(solution.insertionSortList(nodes[0]))
