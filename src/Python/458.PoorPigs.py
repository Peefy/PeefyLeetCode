
class Solution(object):
    def poorPigs(self, buckets, minutesToDie, minutesToTest):
        """
        :type buckets: int
        :type minutesToDie: int
        :type minutesToTest: int
        :rtype: int
        """
        if buckets == 1:
            return 0      
        single = minutesToTest // minutesToDie + 1
        r = 1
        i = 1
        while True:
            r *= single
            if r >= buckets:
                return i
            i += 1
        
if __name__ == '__main__':
    solution = Solution()
    print(solution.poorPigs(1000, 15, 60))  # 5
    print(solution.poorPigs(1000, 12, 60))  # 4
    print(solution.poorPigs(1000, 10, 60))  # 4
    print(solution.poorPigs(1, 1, 1))       # 0
    print(solution.poorPigs(4, 1, 2))       # 2
else:
    pass
