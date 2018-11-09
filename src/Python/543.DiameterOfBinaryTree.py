
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def diameterOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.count = 0
        def order(root):
            if root is None:
                return 0
            leftcount = order(root.left)
            rightcount = order(root.right)
            if leftcount + rightcount > self.count:
                self.count = leftcount + rightcount
            return max(leftcount, rightcount) + 1
        self.count = 0
        order(root)
        return self.count
        
if __name__ == '__main__':
    solution = Solution()
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    root.left.right = TreeNode(5)
    print(solution.diameterOfBinaryTree(root))
    root.left = TreeNode(1)
    print(solution.diameterOfBinaryTree(root))
    root = TreeNode(2147483647)
    print(solution.diameterOfBinaryTree(root))
else:
    pass
