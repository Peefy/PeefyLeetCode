
class ListNode:
   def __init__(self, x):        
       self.val = x
       self.next = None


class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:

    def buildArrToBST(self, arr, left, right):
        if right - left == 1:
            rnode = TreeNode(arr[right])
            rnode.left = TreeNode(arr[left])
            return rnode
        if left == right:
            return TreeNode(arr[left])
        middle = (left + right) // 2
        node = TreeNode(arr[middle])
        node.left = self.buildArrToBST(arr, left, middle - 1)
        node.right = self.buildArrToBST(arr, middle + 1, right)
        return node

    def sortedListToBST(self, head: ListNode) -> TreeNode:
        if head is None:
            return
        arr = []
        n = 0
        while head is not None:
            arr.append(head.val)
            head = head.next
            n += 1 
        treenode = self.buildArrToBST(arr, 0, n - 1)
        return treenode


if __name__ == "__main__":
    solution = Solution()
    node = ListNode(-10)
    node.next = ListNode(-3)
    node.next.next = ListNode(0)
    node.next.next.next = ListNode(5)
    node.next.next.next.next = ListNode(9)
    print(solution.sortedListToBST(node))
   