
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def upsideDownBinaryTree(self, root):
        if root is None or root.left is None: 
            return root
        newRoot = self.upsideDownBinaryTree(root.left)
        root.left.left = root.right
        root.left.right = root
        root.left = None
        root.right = None
        return newRoot


if __name__ == "__main__":
    solution = Solution()
    node = TreeNode(1)
    node.left = TreeNode(2)
    node.right = TreeNode(5)
    node.left.left = TreeNode(3)
    node.left.right = TreeNode(4)
    node.right.right = TreeNode(6)
    print(solution.upsideDownBinaryTree(node))
    i = 1
