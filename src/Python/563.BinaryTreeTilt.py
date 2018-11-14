
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def findTilt(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.tilt = 0
        def getval(root):
            if root is None:
                return 0
            leftsum = getval(root.left)
            rightsum = getval(root.right)
            self.tilt += abs(leftsum - rightsum)
            return root.val + leftsum + rightsum
        getval(root)
        return self.tilt

if __name__ == '__main__':
    solution = Solution()
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    root.right.left = TreeNode(5)
    print(solution.findTilt(root))
else:
    pass
