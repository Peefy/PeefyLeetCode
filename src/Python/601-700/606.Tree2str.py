
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def tree2str(self, t):
        """
        :type t: TreeNode
        :rtype: str
        """ 
        if not t:
            return ''
        s = str(t.val)
        left = self.tree2str(t.left)
        right = self.tree2str(t.right)
        if not left and not right:
            return s
        if not right:
            return s+'('+left+')'
        return s+'('+left+')'+'('+right+')'

if __name__ == '__main__':
    solution = Solution()
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    print(solution.tree2str(root))
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.right = TreeNode(4)
    print(solution.tree2str(root))
else:
    pass
