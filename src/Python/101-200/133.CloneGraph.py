
class Node:
    def __init__(self, val, neighbors = None):
        self.val = val
        self.neighbors = neighbors


class Solution:
    def cloneGraph(self, node):
        self.dic = {} 
        return self.dfs(node)

    def dfs(self, node):
        if node not in self.dic:
            self.dic[node] = copy = Node(node.val, [])
            for nei in node.neighbors: 
                copy.neighbors.append(self.dfs(nei)) 
        return self.dic[node]

if __name__ == "__main__":
    solution = Solution()
    node1 = Node(1)
    node2 = Node(2)
    node3 = Node(3)
    node4 = Node(4)
    node1.neighbors = [node2, node4]
    node2.neighbors = [node1, node3]
    node3.neighbors = [node2, node4]
    node4.neighbors = [node1, node3]
    print(solution.cloneGraph(node1))
        