
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        l1node = l1
        l2node = l2
        prenode = None
        r = 0
        flag = 0
        while l1node is not None or l2node is not None:
            if l1node is None:
                l2node.val += r
                r = l2node.val // 10
                l2node.val %= 10
                prenode = l2node
                l2node = l2node.next 
                flag = 1
            elif l2node is None:
                l1node.val += r
                r = l1node.val // 10
                l1node.val %= 10
                prenode = l1node
                l1node = l1node.next
                flag = 2
            else:
                l1node.val += (l2node.val + r)
                r = l1node.val // 10
                l1node.val %= 10
                l2node.val = l1node.val
                prenode = l1node
                l1node = l1node.next
                l2node = l2node.next 
        if r > 0:
            node = ListNode(r)
            prenode.next = node
        return l2 if flag == 1 else l1


if __name__ == "__main__":
    solution = Solution()
    node1 = ListNode(2)
    node1.next = ListNode(4)
    node1.next.next = ListNode(3)
    node2 = ListNode(5)
    node2.next = ListNode(6)
    node2.next.next = ListNode(4)
    print(solution.addTwoNumbers(node1, node2).val)
    node1.next = ListNode(1)
    print(solution.addTwoNumbers(node1, node2))

