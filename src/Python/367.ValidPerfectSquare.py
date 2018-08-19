
class Solution:
    def isPerfectSquare(self, num):
        """
        :type num: int
        :rtype: bool
        """
        left = 1
        right = num // 2 + 1    
        while left <= right:
            middle = (left + right) // 2
            r = middle * middle
            if r == num:
                return True
            elif r <= num:
                left = middle + 1
            else:
                right = middle - 1
        return False
            
if __name__ == '__main__':
    solution = Solution()
    print(solution.isPerfectSquare(1))
    print(solution.isPerfectSquare(16))
    print(solution.isPerfectSquare(34))
else:
    pass
