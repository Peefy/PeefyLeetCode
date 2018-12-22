
class Solution:
    def maxDistToClosest(self, seats):
        """
        :type seats: List[int]
        :rtype: int
        """
        count = 0
        maxcount = 0
        for i, seat in enumerate(seats):
            if seat == 1:
                if count > maxcount:
                    maxcount = count
                count = 0
            else:
                count += 1
        return max((maxcount + 1) // 2, count, seats.index(1))

if __name__ == '__main__':
    solution = Solution()
    print(solution.maxDistToClosest([1,0,0,0,1,0,1]))
    print(solution.maxDistToClosest([1,0,0,0]))
    print(solution.maxDistToClosest([0,0,1]))
else:
    pass
