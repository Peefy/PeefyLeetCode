
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def inorder(self, node, ans):
        if node is None:
            return
        self.inorder(node.left, ans)
        ans.append(node.val)
        self.inorder(node.right, ans)

    def inorderTraversal(self, root: TreeNode) -> list:
        ans = []
        self.inorder(root, ans)
        return ans


if __name__ == "__main__":
    solution = Solution()
    root = TreeNode(1)
    root.right = TreeNode(2)
    root.right.left = TreeNode(3)
    print(solution.inorderTraversal(root))
   