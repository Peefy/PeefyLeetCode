
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def averageOfLevels(self, root):
        """
        :type root: TreeNode
        :rtype: List[float]
        """
        r = []
        if root is None:
            return r
        q = [root]
        while len(q) > 0:
            sum = 0
            newq = []
            l = len(q)
            for node in q:
                sum += node.val
                if node.left is not None:
                    newq.append(node.left)
                if node.right is not None:
                    newq.append(node.right)
            r.append(sum / l)
            q = newq
        return r

if __name__ == '__main__':
    solution = Solution()
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    print(solution.averageOfLevels(root))
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.right = TreeNode(4)
    print(solution.averageOfLevels(root))
else:
    pass
