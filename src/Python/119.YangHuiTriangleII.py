
class Solution:
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        rowIndex += 1
        if rowIndex == 0:
            return []
        init = [1]
        for i in range(rowIndex - 1):
            init.append(0)
            init.insert(0, 0)
            for j in range(len(init) - 1):
                init[j] = init[j] + init[j + 1]
        # return init[0 : rowIndex]
        return init


if __name__ == '__main__':
    solution = Solution()
    print(solution.getRow(0))
    print(solution.getRow(1))
    print(solution.getRow(2))
    print(solution.getRow(3))
    print(solution.getRow(4))
    print(solution.getRow(5))
else:
    pass
