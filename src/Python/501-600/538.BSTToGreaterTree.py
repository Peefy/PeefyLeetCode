
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    lastsum = 0
    def order(self, root):
        if root is None:
            return
        self.order(root.right)
        root.val += self.lastsum 
        self.lastsum = root.val
        self.order(root.left)

    def convertBST(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        self.order(root)
        return root

if __name__ == '__main__':
    solution = Solution()
    root = TreeNode(5)
    root.left = TreeNode(2)
    root.right = TreeNode(13)
    print(solution.convertBST(root))
    root = TreeNode(5)
    root.left = TreeNode(4)
    root.right = TreeNode(7)
    print(solution.convertBST(root))
else:
    pass
