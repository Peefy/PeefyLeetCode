
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def pathSumValue(self, node, sum, val):
        if node is None:
            return 0    
        count = 0     
        val += node.val
        if val == sum:
            count += 1
        return count + self.pathSumValue(node.left, sum, val) + self.pathSumValue(node.right, sum, val)
 
    def pathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: int
        """
        if root is None:
            return 0 
        return self.pathSum(root.left, sum) + self.pathSum(root.right, sum) + self.pathSumValue(root, sum, 0)

if __name__ == '__main__':
    solution = Solution()
    root = TreeNode(10)
    root.left = TreeNode(5)
    root.right = TreeNode(-3)
    root.right.right = TreeNode(11)
    root.left.left = TreeNode(3)
    root.left.right = TreeNode(2)
    root.left.left.left = TreeNode(3)
    root.left.left.right = TreeNode(-2)
    root.left.right.right = TreeNode(1)
    print(solution.pathSum(root, 8))
    root = TreeNode(1)
    root.right = TreeNode(2)
    root.right.right = TreeNode(3)
    root.right.right.right = TreeNode(4)
    root.right.right.right.right = TreeNode(5)
    print(solution.pathSum(root, 3))
else:
    pass
