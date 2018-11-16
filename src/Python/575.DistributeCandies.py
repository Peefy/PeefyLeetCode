
class Solution:
    def distributeCandies(self, candies):
        """
        :type candies: List[int]
        :rtype: int
        """
        return min(len(set(candies)), len(candies) // 2)

if __name__ == '__main__':
    solution = Solution()
    print(solution.distributeCandies([1,1,2,2,3,3]))
    print(solution.distributeCandies([1,1,2,3]))
else:
    pass
