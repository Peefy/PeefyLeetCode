
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution: 
    def increasingBST(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        self.nodes = []
        def morder(node):
            if node is None:
                return 
            morder(node.left)
            self.nodes.append(node.val)
            morder(node.right)
        morder(root)
        root = TreeNode(-1)
        first = root
        for node in self.nodes:
            first.right = TreeNode(node)
            first = first.right
        return root.right

        
if __name__ == '__main__':
    solution = Solution()
    root = TreeNode(6)
    root.left = TreeNode(2)
    root.right = TreeNode(8)
    root.left.left = TreeNode(0)
    root.left.right = TreeNode(4)
    root.right.left = TreeNode(7)
    root.right.right = TreeNode(9)
    root.left.right.left = TreeNode(2)
    root.left.right.right = TreeNode(6)
    print(solution.increasingBST(root))
    root.left = TreeNode(1)
    print(solution.increasingBST(root))
else:
    pass
