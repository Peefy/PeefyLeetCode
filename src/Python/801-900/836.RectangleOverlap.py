class Solution:
    def isRectangleOverlap(self, rec1, rec2):
        """
        :type rec1: List[int]
        :type rec2: List[int]
        :rtype: bool
        """
        return (rec2[0] - rec1[2]) * (rec2[2] - rec1[0]) < 0 and (
            rec2[1] - rec1[3]) * (rec2[3] - rec1[1]) < 0


if __name__ == '__main__':
    solution = Solution()
    print(solution.isRectangleOverlap(rec1=[0, 0, 2, 2], rec2=[1, 1, 3, 3]))
    print(solution.isRectangleOverlap(rec1=[0, 0, 1, 1], rec2=[1, 0, 2, 1]))
else:
    pass
