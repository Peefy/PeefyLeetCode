
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def dfs(self, node, ans, tmp, s, targetsum):
        tmp.append(node.val)
        targetsum += node.val
        if node.left is None and node.right is None:
            if targetsum == s:
                ans.append(tmp[:])
            return
        if node.left is not None:
            self.dfs(node.left, ans, tmp, s, targetsum)
            tmp.pop()
        if node.right is not None:
            self.dfs(node.right, ans, tmp, s, targetsum)
            tmp.pop()

    def pathSum(self, root: TreeNode, s: int) -> list:
        ans = []
        if root is None:
            return []
        self.dfs(root, ans, [], s, 0)
        return ans


if __name__ == "__main__":
    solution = Solution()
    node = TreeNode(5)
    node.left = TreeNode(4)
    node.right = TreeNode(8)
    node.left.left = TreeNode(11)
    node.left.left.left = TreeNode(7)
    node.left.left.right = TreeNode(2)
    node.right.left = TreeNode(13)
    node.right.right = TreeNode(4)
    node.right.right.left = TreeNode(5)
    node.right.right.right = TreeNode(1)
    print(solution.pathSum(node, 22))
   