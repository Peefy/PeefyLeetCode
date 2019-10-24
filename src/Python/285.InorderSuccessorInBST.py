# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def inorderSuccessor(self, root, p):
        """
        :type root: TreeNode
        :type p: TreeNode
        :type q: TreeNode
        :rtype: TreeNode
        """
        cur = root
        pre = None
        s = []
        while cur is not None or len(s) > 0:
            while cur is not None:
                s.append(cur)
                cur = cur.left
            if len(s) > 0:
                cur = s[-1]
                if pre == p:
                    return cur
                s.pop()
                pre = cur
                cur = cur.right
        return None

   
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
    print(solution.inorderSuccessor(node, p, q))

