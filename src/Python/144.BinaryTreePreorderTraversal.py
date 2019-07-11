
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution(object):
    def preorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        if root is None:
            return []   
        stack, output = [root, ], []
        while stack:
            root = stack.pop()
            if root is not None:
                output.append(root.val)
                if root.right is not None:
                    stack.append(root.right)
                if root.left is not None:
                    stack.append(root.left)
        return output


if __name__ == "__main__":
    solution = Solution()
    node = TreeNode(2)
    node.left = TreeNode(1)
    node.right = TreeNode(3)
    node.right.left = TreeNode(4)
    print(solution.levelOrder(node))
   