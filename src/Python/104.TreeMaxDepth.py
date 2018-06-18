# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return 0
        return max(self.maxDepth(root.left), self.maxDepth(root.right)) + 1
    
if __name__ == '__main__':
    solution = Solution()
    p = TreeNode(1)
    p.left = TreeNode(2)
    p.left.right = TreeNode(3)
    p.left.right.right = TreeNode(4)
    p.right = TreeNode(3)
    print(solution.maxDepth(p))
else:
    pass
