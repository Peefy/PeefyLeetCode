# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    isSame = True
    def change(self, isSame):
        if isSame == False:
            self.isSame = isSame
    
    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        if p is None and q is None:
            self.change(True)
            return True
        if p is None and q is not None:
            self.change(False)
            return False
        if p is not None and q is None:
            self.change(False)
            return False
        if p.val == q.val:
            self.change(True)
        else:
            self.change(False)
        isSame = self.isSameTree(p.left, q.left)
        self.change(isSame)
        isSame = self.isSameTree(p.right, q.right)   
        self.change(isSame)
        return self.isSame

if __name__ == '__main__':
    solution = Solution()
    p = TreeNode(1)
    p.left = TreeNode(2)
    p.right = TreeNode(2)
    q = TreeNode(1)
    q.left = TreeNode(2)
    q.right = TreeNode(3)
    print(solution.isSameTree(p, q))
else:
    pass
