# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def newNode(self, node, nums, start, end):
        if start > end:
            return None
        node = TreeNode(0)
        mid = end - (end - start) // 2
        node.val = nums[mid]
        node.left = self.newNode(node.left, nums, start, mid - 1)
        node.right = self.newNode(node.right, nums, mid + 1, end)
        return node
    
    def sortedArrayToBST(self, nums):
        """
        :type nums: List[int]
        :rtype: TreeNode
        """
        root = None
        n = len(nums)
        if n == 0:
            return root
        return self.newNode(root, nums, 0, n - 1)
        
                      
if __name__ == '__main__':
    solution = Solution()
    print(solution.sortedArrayToBST([-10, -3, 0, 5, 9]))
else:
    pass
