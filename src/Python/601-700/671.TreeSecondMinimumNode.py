
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def findSecondMinimumValue(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return -1
        secondmin = 99999999
        queue = [root]
        for q in queue:
            if q.left is not None:
                queue.extend([q.left, q.right])
            if q.val > root.val and q.val < secondmin:
                secondmin = q.val
        return -1 if secondmin == 99999999 else secondmin

if __name__ == '__main__':
    solution = Solution()
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(2)
    root.right.right = TreeNode(4)
    print(solution.findSecondMinimumValue(root))
    root = TreeNode(2)
    root.left = TreeNode(2)
    root.right = TreeNode(2)
    print(solution.findSecondMinimumValue(root))
else:
    pass
