
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def findTarget(self, root, k):
        """
        :type root: TreeNode
        :type k: int
        :rtype: bool
        """
        def find(root, k):
            if not root:
                return False
            if root.val in s:
                return True
            s.add(k - root.val)
            return find(root.left, k) or find(root.right, k)
        s = set()
        return find(root, k)

if __name__ == '__main__':
    solution = Solution()
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    print(solution.findTarget(root, 5))
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.right = TreeNode(4)
    print(solution.findTarget(root, 2))
else:
    pass
