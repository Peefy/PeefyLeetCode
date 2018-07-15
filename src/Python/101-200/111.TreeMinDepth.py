# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def minDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return 0
        if root.left is None and root.right is not None:
            return self.minDepth(root.right) + 1
        elif root.right is None and root.left is not None:
            return self.minDepth(root.left) + 1
        return min(self.minDepth(root.right), self.minDepth(root.left)) + 1
        
if __name__ == '__main__':
    solution = Solution()
    node = TreeNode(1)
    node.left = TreeNode(2)
    node.left.left = TreeNode(2)
    node.left.left.left = TreeNode(2)
    print(solution.minDepth(node))
    node.right = TreeNode(3)
    node.left.left = TreeNode(4)
    node.right.right = TreeNode(5)
    node.right.right.right = TreeNode(5)
    print(solution.minDepth(node))
else:
    pass
