
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def postorderTraversal(self, root: TreeNode):
        ans = []
        if root == None:
            return ans
        stack = []
        stack.append(root)
        while len(stack) > 0: 
            node = stack.pop()
            ans.insert(0, node.val)
            if node.left is not None:
                stack.append(node.left)
            if node.right is not None:
                stack.append(node.right)
        return ans


if __name__ == "__main__":
    solution = Solution()
    root = TreeNode(1)
    root.right = TreeNode(2)
    root.right.left = TreeNode(3)
    print(solution.postorderTraversal(root))
   