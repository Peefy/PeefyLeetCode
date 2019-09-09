# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def countNodes(self, root):
        if root is None:
            return 0
        left = self.countLevel(root.left)
        right = self.countLevel(root.right)
        if left == right:
            return self.countNodes(root.right) + (1 << left)
        else:
            return self.countNodes(root.left) + (1 << right)
        
    
    def countLevel(self, root):
        level = 0
        while root is not None:
            level += 1
            root = root.left
        return level

                      
if __name__ == '__main__':
    solution = Solution()
    node = TreeNode(1)
    node.left = TreeNode(2)
    node.right = TreeNode(3)
    node.left.left = TreeNode(4)
    node.left.right = TreeNode(5)
    node.right.left = TreeNode(6)
    print(solution.countNodes(node))

