
def isBadVersion(version):
    if version <= 5:
        return False
    return True

class Solution:
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        left = 1
        right = n
        while left <= right:
            middle = (left + right) // 2
            if isBadVersion(middle) == True:
                right = middle - 1
            else:
                left = middle + 1
        return left

if __name__ == '__main__':
    solution = Solution()
    print(solution.firstBadVersion(7));
else:
    pass
