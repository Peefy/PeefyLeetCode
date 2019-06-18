
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def dfs(self, root):
        if root is None:
            return None
        leftnode = self.dfs(root.left)
        rightnode = self.dfs(root.right)
        node = leftnode
        while node and node.right:
            node = node.right
        if leftnode:
            node.right = rightnode
            root.right = leftnode
            root.left = None
        return root

    def flatten(self, root):
        """
        Do not return anything, modify root in-place instead.
        """
        self.dfs(root)


if __name__ == "__main__":
    solution = Solution()
    node = TreeNode(1)
    node.left = TreeNode(2)
    node.right = TreeNode(5)
    node.left.left = TreeNode(3)
    node.left.right = TreeNode(4)
    node.right.right = TreeNode(6)
    print(solution.flatten(node))
    i = 1