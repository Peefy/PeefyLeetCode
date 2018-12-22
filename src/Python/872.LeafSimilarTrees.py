
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def getlist(self, root):
        self.l = []
        def order(node):
            if node is None:
                return
            if node.left is None and node.right is None:
                self.l.append(node.val)
                return
            order(node.left)
            order(node.right)
        order(root)
        return self.l

    def leafSimilar(self, root1, root2):
        """
        :type root1: TreeNode
        :type root2: TreeNode
        :rtype: bool
        """
        return self.getlist(root1) == self.getlist(root2)


if __name__ == '__main__':
    solution = Solution()
    root1 = TreeNode(1)
    root1.left = TreeNode(2)
    root2 = TreeNode(1)
    root2.right = TreeNode(2)
    print(solution.leafSimilar(root1, root2))

else:
    pass
