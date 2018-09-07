class Node:
    def __init__(self, val, isLeaf, topLeft, topRight, bottomLeft, bottomRight):
        self.val = val
        self.isLeaf = isLeaf
        self.topLeft = topLeft
        self.topRight = topRight
        self.bottomLeft = bottomLeft
        self.bottomRight = bottomRight

class Solution:
    def construct_node(self, node, grid):
        node = Node('*', True, None, None, None, None, None)
        n = len(grid)
        false_flag = 0
        true_flag = 0
        for i in range(n):
            for j in range(n):
                if grid[i][j] == 0:
                    node.val = False
                    false_flag = 1
                else:
                    node.val = True
                    true_flag = 1
        if true_flag and false_flag:
            node.isLeaf = False
        return node

    def construct(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: Node
        """
        root = Node('*', False, None, None, None, None, None)
        return self.construct_node(root, grid)

if __name__ == '__main__':
    solution = Solution()
    print(solution.construct([[1, 1], [1, 1]]))
else:
    pass
