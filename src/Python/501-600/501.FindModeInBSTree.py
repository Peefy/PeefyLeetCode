
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

import math

class Solution:
    def findNodeVal(self, root):
        if root is None:
            return []
        return self.findNodeVal(root.left) + [root.val] + self.findNodeVal(root.right)

    def findMode(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        if root is None:
            return []
        vals = self.findNodeVal(root) + [math.inf]
        lastval = vals[0]
        maxcount = 0
        lastindex = 0 
        r = [lastval]
        for i in range(1, len(vals)):
            if vals[i] != lastval:
                count = i - lastindex
                if count > maxcount:
                    r.clear()
                    r.append(lastval)
                    maxcount = count
                    lastindex = i
                elif count == maxcount:
                    r.append(lastval)
                lastindex = i
            lastval = vals[i]
        return r
        
if __name__ == '__main__':
    solution = Solution()
    root = TreeNode(6)
    root.left = TreeNode(2)
    root.right = TreeNode(8)
    root.left.left = TreeNode(0)
    root.left.right = TreeNode(4)
    root.right.left = TreeNode(7)
    root.right.right = TreeNode(9)
    root.left.right.left = TreeNode(2)
    root.left.right.right = TreeNode(6)
    print(solution.findMode(root))
    root.left = TreeNode(1)
    print(solution.findMode(root))
    root = TreeNode(2147483647)
    print(solution.findMode(root))
else:
    pass
