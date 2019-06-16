
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def __init__(self):
        self.tmp = -float('inf')

    def isValidBST(self, root: TreeNode) -> bool:
        if not root: 
            return True
        if not self.isValidBST(root.left): 
            return False
        if self.tmp >= root.val: 
            return False
        self.tmp = root.val
        if not self.isValidBST(root.right): 
            return False
        return True

if __name__ == "__main__":
    solution = Solution()
    node = TreeNode(2)
    node.left = TreeNode(1)
    node.right = TreeNode(3)
    print(solution.isValidBST(node))
   