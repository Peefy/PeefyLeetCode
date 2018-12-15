
class Solution:
    def rotatedDigits(self, N):
        """
        :type N: int
        :rtype: int
        """
        res = 0
        for num in range(N+1):
            s_num =  str(num)
            if ('3' not in s_num and '4' not in s_num and  '7' not in s_num) and ('2' in s_num or '5' in s_num or '6' in s_num or '9' in s_num):
                res += 1
        return res

if __name__ == '__main__':
    solution = Solution()
    print(solution.rotatedDigits(10))
    print(solution.rotatedDigits(857))
else:
    pass

