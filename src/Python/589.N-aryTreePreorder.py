
class Node(object):
    def __init__(self, val, children):
        self.val = val
        self.children = children

class Solution(object):
    def preorder(self, root):
        """
        :type root: Node
        :rtype: List[int]
        """
        if root is None:
            return []
        nodelist = []
        nodelist.append(root.val)
        for node in root.children:
            nodelist += self.preorder(node)
        return nodelist

if __name__ == '__main__':
    solution = Solution()
    root = Node(1, [])
    root.children.append(Node(3, []))
    root.children.append(Node(2, []))
    root.children.append(Node(4, []))
    print(solution.preorder(root))
else:
    pass
