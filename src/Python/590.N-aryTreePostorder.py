
class Node(object):
    def __init__(self, val, children):
        self.val = val
        self.children = children

class Solution(object):
    def trace(self, node, nodelist):
        if node is None:
            return
        for n in node.children:
            self.trace(n, nodelist)
        nodelist.append(node.val)

    def postorder(self, root):
        """
        :type root: Node
        :rtype: List[int]
        """
        nodelist = []
        self.trace(root, nodelist)
        return nodelist

if __name__ == '__main__':
    solution = Solution()
    root = Node(1, [])
    root.children.append(Node(3, []))
    root.children.append(Node(2, []))
    root.children.append(Node(4, []))
    print(solution.postorder(root))
else:
    pass
