
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def levelOrder(self, root: TreeNode) -> list:
        if root is None:
            return []
        ans = []
        tmp = []
        queue = [root]
        nextqueue = []
        while len(queue) > 0:
            node = queue.pop(0)
            tmp.append(node.val)
            if node.left is not None:
                nextqueue.append(node.left)
            if node.right is not None:
                nextqueue.append(node.right)
            if len(queue) == 0:
                ans.append(tmp[:])
                tmp.clear()
                queue = nextqueue[:]
                nextqueue.clear()
        return ans

if __name__ == "__main__":
    solution = Solution()
    node = TreeNode(2)
    node.left = TreeNode(1)
    node.right = TreeNode(3)
    node.right.left = TreeNode(4)
    print(solution.levelOrder(node))
   