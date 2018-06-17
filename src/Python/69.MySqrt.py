
class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x == 0:
            return 0
        if x == 1:
            return 1
        l = 1
        r = x // 2
        # 二分查找
        while l < r:
            mid = l + (( r - l + 1) >> 1)
            if mid * mid == x: 
                return mid
            elif mid * mid < x:
                l = mid
            else:
                r = mid - 1
        return l

if __name__ == '__main__':
    solution = Solution()
    print(solution.mySqrt(4))
    print(solution.mySqrt(8))
else:
    pass
