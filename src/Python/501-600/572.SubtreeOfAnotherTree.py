
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def isSame(self, s, t):
        if s is None and t is None:
            return True
        if s is None or t is None:
            return False
        if s.val != t.val:
            return False
        return self.isSame(s.left, t.left) and self.isSame(s.right, t.right)

    def isSubtree(self, s, t):
        """
        :type s: TreeNode
        :type t: TreeNode
        :rtype: bool
        """
        if s is None:
            return False 
        if self.isSame(s, t) == True:
            return True
        if self.isSubtree(s.left, t) == True:
            return True
        if self.isSubtree(s.right, t) == True:
            return True
        return False
    
if __name__ == '__main__':
    solution = Solution()
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    root.right.left = TreeNode(5)
    t = TreeNode(1)
    t.left = TreeNode(2)
    print(solution.isSubtree(root, root.left))
    print(solution.isSubtree(root, t))
    s = TreeNode(1)
    s.left = TreeNode(1)
    t = TreeNode(1)
    print(solution.isSubtree(s, t))
else:
    pass
