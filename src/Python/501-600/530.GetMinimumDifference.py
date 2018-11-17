
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

import math

class Solution:
    nodelist = []
    minval = math.inf
    def getdis(self, root):
        if root is None:
            return
        self.getdis(root.left)
        if len(self.nodelist) > 0:
            self.minval = min(root.val - self.nodelist[-1], self.minval) 
        self.nodelist.append(root.val)
        self.getdis(root.right)

    def getMinimumDifference(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.minval = math.inf
        self.nodelist = []
        self.getdis(root)
        return self.minval

if __name__ == '__main__':
    solution = Solution()
    root = TreeNode(1)
    root.right = TreeNode(5)
    root.right.left = TreeNode(3)
    print(solution.getMinimumDifference(root))
    root = TreeNode(5)
    root.left = TreeNode(4)
    root.right = TreeNode(7)
    print(solution.getMinimumDifference(root))
else:
    pass
