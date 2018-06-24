# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def hasPathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: bool
        """
        if root is None:
            return False
        stack = []
        stack.append(root)
        nodesum = []
        nodesum.append(root.val)
        while len(stack) > 0:
            node = stack.pop()
            nowsum = nodesum.pop()
            if node.left is not None:
                stack.append(node.left)
                nodesum.append(node.left.val + nowsum)
            if node.right is not None:            
                stack.append(node.right)
                nodesum.append(node.right.val + nowsum)
            if node.left is None and node.right is None:
                if nowsum == sum:
                    return True
        return False

if __name__ == '__main__':
    solution = Solution()
    node = TreeNode(1)
    node.left = TreeNode(2)
    node.right = TreeNode(3)
    node.left.left = TreeNode(2)
    node.left.left.left = TreeNode(2)
    print(solution.hasPathSum(node, 4))
    node.right = TreeNode(3)
    node.left.left = TreeNode(4)
    node.right.right = TreeNode(5)
    node.right.right.right = TreeNode(5)
    print(solution.hasPathSum(node, 10))
else:
    pass
