
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def dfs(self, node, val):
        if node is None:
            return 0
        val = 10 * val + node.val
        if node.left is None and node.right is None:
            return val
        return self.dfs(node.left, val) + self.dfs(node.right, val)

    def sumNumbers(self, root):
        if root is None:
            return 0
        return self.dfs(root, 0)


if __name__ == "__main__":
    solution = Solution()
    node = TreeNode(1)
    node.left = TreeNode(2)
    node.right = TreeNode(3)
    print(solution.sumNumbers(node))
    node.left.left = TreeNode(2)
    node.right.right = TreeNode(3)
    print(solution.sumNumbers(node))
