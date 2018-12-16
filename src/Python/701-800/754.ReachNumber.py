
class Solution:
    def reachNumber(self, target):
        """
        :type target: int
        :rtype: int
        """
        target = abs(target)
        m = int((-1 + (1 + 8 * target) ** 0.5) // 2)
        while True:
            total = (m * m + m) // 2 - target
            if total == 0:
                return m
            elif total < 0:
                m += 1
            elif total % 2 == 0:
                return m
            else:
                m += 1     
        return m

if __name__ == '__main__':
    solution = Solution()
    print(solution.reachNumber(5))
    print(solution.reachNumber(4))
    print(solution.reachNumber(3))
    print(solution.reachNumber(2))
    print(solution.reachNumber(1))
    print(solution.reachNumber(0))
else:
    pass

