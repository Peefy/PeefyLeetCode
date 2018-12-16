
from queue import PriorityQueue
import collections

class Solution:
    def networkDelayTime(self, times, N, K):
        """
        :type times: List[List[int]]
        :type N: int
        :type K: int
        :rtype: int
        """
        INF = 0x7FFFFFFF
        adj = collections.defaultdict(list)
        visit = [0] * (N + 1)
        dist = [INF] * (N + 1)
        q = PriorityQueue()

        for u, v, w in times:
            adj[u].append((v, w))

        dist[K] = 0
        q.put((dist[K], K))

        while not q.empty():
            MIN, u = q.get()
            if visit[u] == 0:
                visit[u] = 1
            else:
                continue
            for v, w in adj[u]:
                if MIN + w < dist[v]:
                    dist[v] = MIN + w
                    q.put((dist[v], v))
        return max(dist[1:]) if visit.count(0) == 1 else -1


if __name__ == '__main__':
    # Dijkstra 单源最短路径算法
    solution = Solution()
    print(solution.networkDelayTime([[2,1,1],[2,3,1],[3,4,1]], 4, 2))
    print(solution.networkDelayTime([[1,2,1],[2,3,2],[1,3,4]], 3, 1))
else:
    pass

