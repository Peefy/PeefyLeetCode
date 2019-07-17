
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    def sortList(self, head: ListNode) -> ListNode:
        if not head or not head.next: 
            return head 
        slow, fast = head, head.next
        while fast and fast.next:
            fast, slow = fast.next.next, slow.next
        mid, slow.next = slow.next, None 
        left, right = self.sortList(head), self.sortList(mid)
        h = res = ListNode(0)
        while left and right:
            if left.val < right.val: 
                h.next, left = left, left.next
            else: 
                h.next, right = right, right.next
            h = h.next
        h.next = left if left else right
        return res.next


if __name__ == "__main__":
    solution = Solution()
    nodes = [ListNode(5), ListNode(4), ListNode(3), ListNode(2), ListNode(1)]
    nodes[0].next = nodes[1]
    nodes[1].next = nodes[2]
    nodes[2].next = nodes[3]
    nodes[3].next = nodes[4]
    print(solution.insertionSortList(nodes[0]))
