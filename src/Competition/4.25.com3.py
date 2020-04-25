

import math

class Solution(object):
    def bfs(self, maze, i, j, fx, fy, m, n):
        if i == fx and j == fy:
            return 0
        path = 0
        bfsqueue = []
        bfsvisit = [[0 for j in range(n)] for i in range(m)]
        bfscost = [[math.inf for j in range(n)] for i in range(m)]
        bfsvisit[i][j] = 2
        bfscost[i][j] = 0
        bfsqueue.append((i, j))
        nextb = []
        while len(bfsqueue) != 0:
            (i, j) = bfsqueue.pop(0)
            nexti, nextj = i + 1, j
            if nexti >= 0 and nexti < m and nextj >= 0 and nextj < n and maze[nexti][nextj] != '#':
                if bfsvisit[nexti][nextj] == 0:
                    bfsqueue.append((nexti, nextj))
                    bfsvisit[nexti][nextj] = 2
                    bfscost[nexti][nextj] = bfscost[i][j] + 1
            nexti, nextj = i , j + 1
            if nexti >= 0 and nexti < m and nextj >= 0 and nextj < n and maze[nexti][nextj] != '#':
                if bfsvisit[nexti][nextj] == 0:
                    bfsqueue.append((nexti, nextj))
                    bfsvisit[nexti][nextj] = 2
                    bfscost[nexti][nextj] = bfscost[i][j] + 1
            nexti, nextj = i - 1, j
            if nexti >= 0 and nexti < m and nextj >= 0 and nextj < n and maze[nexti][nextj] != '#':
                if bfsvisit[nexti][nextj] == 0:
                    bfsqueue.append((nexti, nextj))
                    bfsvisit[nexti][nextj] = 2
                    bfscost[nexti][nextj] = bfscost[i][j] + 1
            nexti, nextj = i, j - 1
            if nexti >= 0 and nexti < m and nextj >= 0 and nextj < n and maze[nexti][nextj] != '#':
                if bfsvisit[nexti][nextj] == 0:
                    bfsqueue.append((nexti, nextj))
                    bfsvisit[nexti][nextj] = 2
                    bfscost[nexti][nextj] = bfscost[i][j] + 1
            path += 1
            bfsvisit[i][j] = 1
        return bfscost

    def minStep(self, maze, sx, sy, fx, fy, m, n):
        return self.bfs(maze, sx, sy, fx, fy, m, n)

    def minimalSteps(self, maze):
        m = len(maze)
        n = len(maze[0])
        s_index_x = -1
        s_index_y = -1
        o_index_x = -1
        o_index_y = -1
        t_index_x = -1
        t_index_y = -1
        Mcount = 0
        Ocount = 0
        cost = 0
        Mlist = []
        Olist = []
        StoOcost = []
        OtoMcost = []
        MtoTcost = []
        for i in range(m):
            for j in range(n):
                if maze[i][j] == 'S':
                    s_index_x = i
                    s_index_y = j
                if maze[i][j] == 'O':
                    Ocount += 1
                    Olist.append((i, j))
                if maze[i][j] == 'T':
                    t_index_x = i
                    t_index_y = j
                if maze[i][j] == 'M':
                    Mcount += 1
                    Mlist.append((i, j))
        if s_index_x == -1 or t_index_x == -1:
            return -1
        if Mcount == 0:
            dis = self.minStep(maze, s_index_x, s_index_y, t_index_x, t_index_y, m, n)[t_index_x][t_index_y]
            if dis == math.inf:
                return -1
            return dis    
        StoOcost = self.minStep(maze, s_index_x, s_index_y, o_index_x, o_index_y, m, n)
        cost = 0
        mcost = math.inf
        for oindex in Olist:
            o_index_x, o_index_y = oindex
            stoocost = StoOcost[o_index_x][o_index_y]
            if stoocost == math.inf:
                continue
            OtoMcost.clear()
            MtoTcost.clear()
            for index in Mlist:
                m_index_x, m_index_y = index
                otomcost = self.minStep(maze, o_index_x, o_index_y, m_index_x, m_index_y, m, n)
                mtotcost = self.minStep(maze, t_index_x, t_index_y, m_index_x, m_index_y, m, n)
                OtoMcost.append(otomcost[m_index_x][m_index_y])
                MtoTcost.append(mtotcost[m_index_x][m_index_y])    
            OtoMcostTwoSum = sum(OtoMcost) * 2
            for i in range(Mcount):
                mcost = min(mcost, stoocost +  OtoMcostTwoSum - OtoMcost[i] + MtoTcost[i])
        if mcost == math.inf:
            return -1
        return mcost

if __name__ == "__main__":
    solution = Solution()
    print(solution.minimalSteps(["S#O", "M..", "M.T"]))
    print(solution.minimalSteps(["S#O", "M.#", "M.T"]))
    print(solution.minimalSteps(["S#O", "M.T", "M.."]))

