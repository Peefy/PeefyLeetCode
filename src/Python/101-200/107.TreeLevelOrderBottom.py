# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    list = []
    index = -1
    def getdepth(self, node):
        if node is None:
            return 0
        return max(self.getdepth(node.left), self.getdepth(node.right)) + 1

    def lowerOrderAdd(self, root , n):
        self.index += 1
        if root is None:
            return
        if self.index >= 0:
            self.list[n - self.index - 1].append(root.val)
        self.lowerOrderAdd(root.left, n)
        self.index -= 1
        self.lowerOrderAdd(root.right, n)
        self.index -= 1

    def levelOrderBottom(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        self.list.clear()
        index = -1
        n = self.getdepth(root)
        if n == 0:
            return []
        for i in range(n):
            self.list.append([])
        self.lowerOrderAdd(root, n)
        return self.list

if __name__ == '__main__':
    solution = Solution()
    p = TreeNode(3)
    p.left = TreeNode(9)
    p.right = TreeNode(20)
    p.right.left = TreeNode(15)
    p.right.right = TreeNode(7)
    print(solution.levelOrderBottom(p))
else:
    pass
