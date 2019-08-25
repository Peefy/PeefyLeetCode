
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution(object):
    def rightSideView(self, root):
        rightmost_value_at_depth = dict() 
        max_depth = -1
        stack = [(root, 0)]
        while stack:
            node, depth = stack.pop()
            if node is not None:
                max_depth = max(max_depth, depth)
                rightmost_value_at_depth.setdefault(depth, node.val)
                stack.append((node.left, depth+1))
                stack.append((node.right, depth+1))
        return [rightmost_value_at_depth[depth] for depth in range(max_depth+1)]


if __name__ == "__main__":
    solution = Solution()
    node = TreeNode(1)
    node.left = TreeNode(2)
    node.left.right = TreeNode(5)
    node.right = TreeNode(3)
    node.right.right = TreeNode(4)
    print(solution.rightSideView(node))

