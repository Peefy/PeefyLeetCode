
class Solution:
    def generate_next(self, arr):
        n = len(arr)
        r = []
        r.append(1)
        for i in range(n - 1):
            r.append(arr[i] + arr[i + 1])
        r.append(1)
        return r

    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        null = []
        one = [1]
        two = [1, 1]
        if numRows == 0:
            return null
        if numRows == 1:
            null.append(one)
            return null
        if numRows == 2:
            null.append(one)
            null.append(two)
            return null
        null.append(one)
        null.append(two)
        arr = two
        for i in range(numRows - 2):
            arr = self.generate_next(arr)
            null.append(arr)
        return null
        
if __name__ == '__main__':
    solution = Solution()
    print(solution.generate(0))
    print(solution.generate(1))
    print(solution.generate(2))
    print(solution.generate(5))
else:
    pass
