
def guess(num):
    NUM = 6
    if num == NUM:
        return 0
    if num < NUM:
        return 1
    if num > NUM:
        return -1

class Solution(object):
    def guessNumber(self, n):
        """
        :type n: int
        :rtype: int
        """
        left = 1
        right = n
        while left <= right:
            middle = left + (right - left) // 2
            num = middle
            if guess(num) == 0:
                return num
            if guess(num) == 1:
                left = middle + 1
            if guess(num) == -1:
                right = middle - 1
        return left
            
if __name__ == '__main__':
    solution = Solution()
    print(solution.guessNumber(10))
else:
    pass
