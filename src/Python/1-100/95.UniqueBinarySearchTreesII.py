
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def generateTrees(self, n):
        def helper(tree):
            # tree 为有序数组
            ans = []
            # 遍历可能的根结点
            for i, val in enumerate(tree):
                # left、right 分别为左右子树包含的结点
                left, right = tree[:i], tree[i+1:]
                # 若左子树为 NULL，则令其为 [None]
                for ltree in helper(left) or [None]:
                    # 若右子树为 NULL，则令其为 [None]
                    for rtree in helper(right) or [None]:
                        root = TreeNode(val)
                        root.left, root.right = ltree, rtree
                        ans.append(root)
            return ans
        return helper(range(1, n + 1))

if __name__ == "__main__":
    solution = Solution()
    print(solution.generateTrees(3))
   