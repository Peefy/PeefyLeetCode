
class Solution:
    def gettwopointsdis(self, point1, point2):
        return (point1[0] - point2[0]) ** 2 + (point1[1] - point2[1]) ** 2

    def numberOfBoomerangs(self, points):
        """
        :type points: List[List[int]]
        :rtype: int
        """
        count = 0
        n = len(points)
        d = {}
        for i in range(n):
            for j in range(n):
                if i == j:
                    continue
                dis = self.gettwopointsdis(points[i], points[j])
                if dis not in d.keys():
                    d[dis] = 1
                else:
                    d[dis] += 1
            for val in d.values():
                count += val * (val - 1)
            d.clear()
        return count

if __name__ == '__main__':
    solution = Solution()
    print(solution.numberOfBoomerangs([[0, 0], [1, 0], [2, 0]]))
    print(solution.numberOfBoomerangs([[0, 0], [1, 0], [-1, 0], [0, 1], [0, -1]]))
else:
    pass
