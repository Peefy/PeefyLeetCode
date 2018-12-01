
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def searchBST(self, root, val):
        """
        :type root: TreeNode
        :type val: int
        :rtype: TreeNode
        """
        if root is None:
            return None
        if val == root.val:
            return root
        return self.searchBST(root.right, val) if val > root.val else self.searchBST(root.left, val)

if __name__ == '__main__':
    solution = Solution()
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    print(solution.searchBST(root, 2))
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.right = TreeNode(4)
    print(solution.searchBST(root, 4))
else:
    pass
