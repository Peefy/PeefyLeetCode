
class Solution:
    def isUgly(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num <= 0:
            return False
        while num % 2 == 0:
            num = num // 2
        while num % 3 == 0:
            num = num // 3
        while num % 5 == 0:
            num = num // 5
        if num == 1:
            return True
        return False

if __name__ == '__main__':
    solution = Solution()
    print(solution.isUgly(1));
    print(solution.isUgly(2));
    print(solution.isUgly(8));
    print(solution.isUgly(12));
    print(solution.isUgly(14));
    print(solution.isUgly(123));
else:
    pass
