# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def binaryTreePaths(self, root):
        """
        :type root: TreeNode
        :rtype: List[str]
        """
        paths = []
        stack = []
        to = '->'
        if root is None:
            return paths
        stack.append(root)
        paths.append(str(root.val))
        paths_r = []
        while len(stack) != 0:
            node = stack.pop(0)
            path = paths.pop(0)
            if node.left is not None:
                stack.append(node.left)
                paths.append(path + to + str(node.left.val))
            if node.right is not None:
                stack.append(node.right)
                paths.append(path + to + str(node.right.val))
            if node.left is None and node.right is None:
                paths_r.append(path)
        return paths_r

if __name__ == '__main__':
    solution = Solution()
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    root.left.left.left = TreeNode(5)
    root.left.left.left.left = TreeNode(6)
    print(solution.binaryTreePaths(root))
else:
    pass