
class Solution(object):

    def heran(self, point1, point2, point3):
        x1 = point1[0]
        y1 = point1[1]
        x2 = point2[0]
        y2 = point2[1]
        x3 = point3[0]
        y3 = point3[1]
        return 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y1 - x1 *y3 - x2 * y1 - x3 * y2)

    def largestTriangleArea(self, points):
        """
        :type points: List[List[int]]
        :rtype: float
        """
        n = len(points)
        area = 0
        for i in range(n):
            for j in range(i, n):
                for k in range(j, n):
                    area = max(area, self.heran(points[i], points[j], points[k]))
        return area
        
if __name__ == '__main__':
    solution = Solution()
    print(solution.largestTriangleArea([[0, 0], [0, 1], [1, 0], [0, 2], [2, 0]]))
    print(solution.largestTriangleArea([[0, 0], [0, 1], [1, 0], [0, 2], [2, 0]]))
else:
    pass




