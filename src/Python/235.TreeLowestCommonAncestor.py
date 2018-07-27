# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def contains(self, root, node):
        if root is None:
            return False
        result = False
        if root.val == node.val:
            result = True
            return result
        result = result or self.contains(root.left, node)
        result = result or self.contains(root.right, node)
        return result

    def lowestCommonAncestor(self, root, p, q):
        """
        :type root: TreeNode
        :type p: TreeNode
        :type q: TreeNode
        :rtype: TreeNode
        """
        if root is None:
            return None
        node = self.lowestCommonAncestor(root.left, p, q)
        if node is not None:
            return node
        node = self.lowestCommonAncestor(root.right, p, q)
        if node is not None:
            return node
        if root.val == q.val and self.contains(root.right, p) == True:
            return root
        if root.val == p.val and self.contains(root.right, q) == True:
            return root     
        if root.val == p.val and self.contains(root.left, q) == True:
            return root
        if root.val == q.val and self.contains(root.left, p) == True:
            return root
        if self.contains(root.left, p) == True and self.contains(root.right, q) == True:
            return root
        if self.contains(root.right, p) == True and self.contains(root.left, q) == True:
            return root
   
if __name__ == '__main__':
    solution = Solution()
    p = TreeNode(3)
    q = TreeNode(5)
    node = TreeNode(6)
    node.left = TreeNode(2)
    node.right = TreeNode(8)
    node.left.left = TreeNode(0)
    node.left.right = TreeNode(4)
    node.right.left = TreeNode(7)
    node.right.right = TreeNode(9)
    node.left.right.left = p
    node.left.right.right = q
    print(solution.lowestCommonAncestor(node, p, q).val)
else:
    pass
