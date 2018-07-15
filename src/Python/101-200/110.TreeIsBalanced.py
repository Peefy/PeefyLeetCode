# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    isblance = True
    def getHeight(self, node):
        if node is None:
            return 0
        leftHeight = self.getHeight(node.left)
        rightHeight = self.getHeight(node.right)
        if abs(leftHeight - rightHeight) > 1:
            self.isblance = False
        return max(leftHeight, rightHeight) + 1

    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if root is None:
            return True
        self.getHeight(root)
        return self.isblance

if __name__ == '__main__':
    solution = Solution()
    node = TreeNode(1)
    node.left = TreeNode(2)
    node.right = TreeNode(3)
    node.left.left = TreeNode(4)
    node.right.right = TreeNode(5)
    print(solution.isBalanced(node))
    node.right.right.right = TreeNode(5)
    print(solution.isBalanced(node))
else:
    pass
