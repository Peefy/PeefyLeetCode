
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    lastval = -99999
    minsub = 99999
    def minDiffInBST(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return self.minsub
        self.minDiffInBST(root.left)
        self.minsub = min(self.minsub, root.val - self.lastval)
        self.lastval = root.val
        self.minDiffInBST(root.right)
        return self.minsub


if __name__ == '__main__':
    solution = Solution()
    root = TreeNode(4)
    root.left = TreeNode(2)
    root.right = TreeNode(6)
    root.left.left = TreeNode(1)
    root.left.right = TreeNode(3)
    print(solution.minDiffInBST(root))
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.right = TreeNode(4)
    print(solution.minDiffInBST(root))
else:
    pass
