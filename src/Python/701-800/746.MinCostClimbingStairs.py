
class Solution:
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        p_2, p_1 = cost[0], cost[1] 
        for c in cost[2:]: 
            p_2, p_1 = p_1, min(p_1 + c, p_2 + c) 
        return min(p_2, p_1)

if __name__ == '__main__':
    solution = Solution()
    print(solution.minCostClimbingStairs([10, 15, 20]))
    print(solution.minCostClimbingStairs([1, 100, 1, 1, 1, 100, 1, 1, 100, 1]))
    print(solution.minCostClimbingStairs([10, 15, 20, 10]))
    print(solution.minCostClimbingStairs([0, 1, 2, 2]))
else:
    pass

