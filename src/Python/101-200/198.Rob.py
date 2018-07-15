
from copy import deepcopy

class Solution:
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        price = 0
        lastprice = 0
        lastlastprice = 0
        robindex = 0
        for i in range(n):
            if nums[i] + lastlastprice >= lastprice:
                robindex = i
                if i - robindex < 2:
                    price -= lastprice
                price += nums[i] 
                price += lastlastprice
            if i - robindex >= 2:
                price += nums[i]
                robindex = i
            lastlastprice = lastprice
            lastprice = price
        return price

if __name__ == '__main__':
    solution = Solution()
    print(solution.rob([1]))
    print(solution.rob([1, 2]))
    print(solution.rob([1, 2, 3]))
    print(solution.rob([2, 3, 2]))
    print(solution.rob([1, 2, 3, 1]))
    print(solution.rob([2, 7, 9, 3, 1]))
    print(solution.rob([2, 7, 1, 1, 9]))
    print(solution.rob([2, 7, 10, 1, 9]))
    print(solution.rob([2, 7, 10, 1, 9, 10]))
else:
    pass
