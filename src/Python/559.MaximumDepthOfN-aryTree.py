
# Definition for a Node.
class Node(object):
    def __init__(self, val, children):
        self.val = val
        self.children = children

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: Node
        :rtype: int
        """
        return 0 if root is None else (1 if len(root.children) == 0 else max(map(lambda x : self.maxDepth(x), root.children)) + 1) 
        
if __name__ == '__main__':
    solution = Solution()
    root = Node(1, [])
    print(solution.maxDepth(root))
    root = Node(1, [Node(1, [(Node(1, []))])])
    print(solution.maxDepth(root))
    root = Node(1, [])
    print(solution.maxDepth(root))
else:
    pass
