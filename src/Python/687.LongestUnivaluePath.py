
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def longestUnivaluePath(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        def dfs(root):
            if root is None:
                return 0
            elif root.left is None and root.right is None:
                return 1
            l = dfs(root.left)
            r = dfs(root.right)
            if root.right and root.right.val == root.val:
                if root.left and root.left.val == root.val:
                    self.maximum = max(self.maximum,l+r+1)
                    return max(l+1,r+1)
                else:
                    self.maximum = max(self.maximum,r+1)
                    return r+1
            elif root.left and root.left.val == root.val:
                self.maximum = max(self.maximum,l+1)
                return l+1
            else:
                return 1
        if root is None:
            return 0
        self.maximum = 1
        dfs(root)
        return self.maximum - 1

if __name__ == '__main__':
    solution = Solution()
    root = TreeNode(1)
    root.left = TreeNode(1)
    root.right = TreeNode(1)
    root.right.right = TreeNode(1)
    print(solution.longestUnivaluePath(root))
    root = TreeNode(5)
    root.left = TreeNode(4)
    root.right = TreeNode(5)
    root.left.left = TreeNode(1)
    root.left.right = TreeNode(1)
    root.right.right = TreeNode(5)
    print(solution.longestUnivaluePath(root))
else:
    pass
