
from copy import deepcopy

class Solution:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if prices is None:
            return 0
        n = len(prices)
        if n == 0:
            return 0
        minprice = prices[0]
        maxprofit = 0
        for i in range(n):
            if prices[i] < minprice:
                minprice = prices[i]
            maxprofit = max(prices[i] - minprice, maxprofit)
        return maxprofit
       
if __name__ == '__main__':
    solution = Solution()
    print(solution.maxProfit([3,2,6,5,0,3]))
    print(solution.maxProfit([7, 1, 5, 3, 6, 4]))
    print(solution.maxProfit([2, 1, 2, 0, 1]))
else:
    pass
