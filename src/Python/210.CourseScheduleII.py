
from collections import defaultdict

class Solution:
    def findOrder(self, numCourses, prerequisites):
        adj_list = defaultdict(list)
        indegree = {}
        for dest, src in prerequisites:
            adj_list[src].append(dest)
            indegree[dest] = indegree.get(dest, 0) + 1
        zero_indegree_queue = [k for k in range(numCourses) if k not in indegree]
        topological_sorted_order = []
        while zero_indegree_queue:
            vertex = zero_indegree_queue.pop(0)
            topological_sorted_order.append(vertex)
            if vertex in adj_list:
                for nei in adj_list[vertex]:
                    indegree[nei] -= 1
                    if indegree[nei] == 0:
                        zero_indegree_queue.append(nei)
        return topological_sorted_order if len(topological_sorted_order) == numCourses else []


if __name__ == "__main__":
    solution = Solution()
    print(solution.canFinish(2, [[1,0]]))
    print(solution.canFinish(4, [[1,0],[2,0],[3,1],[3,2]]))

