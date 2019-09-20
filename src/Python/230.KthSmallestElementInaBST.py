

class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def mid_order(self, root):
        if not root: return
        yield from self.mid_order(root.left)
        yield root.val
        yield from self.mid_order(root.right)
        
    def kthSmallest(self, root: TreeNode, k: int) -> int:
        gen = self.mid_order(root)
        for _ in range(k - 1):
            next(gen)
        return next(gen)


if __name__ == "__main__":
    solution = Solution()
    root = TreeNode(3)
    root.left = TreeNode(1)
    root.right = TreeNode(4)
    root.left.right = TreeNode(2)
    print(solution.kthSmallest(root, 2)

