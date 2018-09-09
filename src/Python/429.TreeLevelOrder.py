class Node(object):
    def __init__(self, val, children):
        self.val = val
        self.children = children

class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Node
        :rtype: List[List[int]]
        """
        r = []
        if root is None:
            return r
        stack = []
        stack.append(root)
        while len(stack) != 0:
            child = []
            n = len(stack)
            for i in range(n):
                node = stack.pop(0)
                child.append(node.val)
                if node.children is not None:
                    for c in node.children:
                        stack.append(c)
            r.append(child)
        return r

if __name__ == '__main__':
    solution = Solution()
    root = Node(1, [])
    node = Node(2, [])
    node.children.append(Node(3, []))
    root.children.append(node)
    root.children.append(node)
    print(solution.levelOrder(root))
else:
    pass
