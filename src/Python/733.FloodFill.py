

class Solution:
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        res = []
        for i in range(left, right + 1):
            j = i
            while j:
                d = j % 10
                if not d:
                    break
                if i % d:
                    break
                j //= 10
            if not j:
                res.append(i)
        return res

if __name__ == '__main__':
    solution = Solution()
    print(solution.selfDividingNumbers(1, 22))
    print(solution.selfDividingNumbers(10, 22))
else:
    pass

