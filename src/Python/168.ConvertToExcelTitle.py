
class Solution:
    def convertToTitle(self, n):
        """
        :type n: int
        :rtype: str
        """
        JINZHI = 26
        alpha = "0ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        r = ""
        while n > 0:
            c = n // JINZHI
            n = n % JINZHI
            if n != 0:
                r = alpha[n] + r
                n = c
            else:
                r = alpha[JINZHI] + r
                n = c - 1
        return r

if __name__ == '__main__':
    solution = Solution()
    print(solution.convertToTitle(1))
    print(solution.convertToTitle(3))
    print(solution.convertToTitle(12))
    print(solution.convertToTitle(26))
    print(solution.convertToTitle(27))
    print(solution.convertToTitle(28))
    print(solution.convertToTitle(701))
    print(solution.convertToTitle(702))
    print(solution.convertToTitle(703))
    print(solution.convertToTitle(704))
    print(solution.convertToTitle(728))
else:
    pass
