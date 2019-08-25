
class Node:
    def __init__(self, val, left = None, right = None, next = None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next


class Solution:
    def connect(self, root):
        if root is None:
            return root
        stack = [root]
        while len(stack) > 0:
            tmp = []
            lastnode = None
            for i in range(len(stack)):
                node = stack[i]
                node.next = lastnode
                lastnode = stack[i]
                if node.right is not None:
                    tmp.append(node.right)
                if node.left is not None:
                    tmp.append(node.left)
            stack = tmp
        return root


if __name__ == "__main__":
    solution = Solution()
    node = Node(1)
    node.left = Node(2)
    node.right = Node(3)
    node.left.left = Node(4)
    node.left.right = Node(5)
    node.right.left = Node(6)
    node.right.right = Node(7)
    print(solution.connect(node))
    i = 1