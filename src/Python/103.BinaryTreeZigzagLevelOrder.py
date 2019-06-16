
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def zigzagLevelOrder(self, root: TreeNode) -> list:
        if root is None:
            return []
        ans = []
        queue = [root]
        order = 1
        while len(queue) > 0:
            tmp = []
            nextqueue = []
            for node in queue:
                tmp.append(node.val)
                if node.left is not None:
                    nextqueue.append(node.left)
                if node.right is not None:
                    nextqueue.append(node.right)
            ans.append(tmp[::order])
            queue = nextqueue
            order = -order
        return ans

if __name__ == "__main__":
    solution = Solution()
    node = TreeNode(1)
    node.left = TreeNode(2)
    node.right = TreeNode(3)
    node.left.left = TreeNode(4)
    node.right.right = TreeNode(5)
    print(solution.zigzagLevelOrder(node))
   