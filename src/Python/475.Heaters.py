
class Solution:
    def findRadius(self, houses, heaters):
        """
        :type houses: List[int]
        :type heaters: List[int]
        :rtype: int
        """
        houses = sorted(set(houses))
        heaters = sorted(set(heaters))
        m = len(houses)
        n = len(heaters)
        i, j = 0, 0
        length = 0
        while i < m and j < n:
            now = abs(houses[i] - heaters[j])
            half = 10e9 if j == n - 1 else abs(heaters[j + 1] - houses[i])
            if now >= length and now <= half:
                length = now
                i += 1
            elif now <= half:
                i += 1
            else:
                j += 1
        return length

if __name__ == '__main__':
    solution = Solution()
    print(solution.findRadius([1,2,3,4], [1,4]))
    print(solution.findRadius([1,2,3,4], [2,6]))
    print(solution.findRadius([1,2,3], [2]))
    print(solution.findRadius([1,5], [2]))
    print(solution.findRadius([1,2,3,4,5,6,7,1], [1,2,3,4,5,6,7]))
    print(solution.findRadius([1,1,1,1,1,1,999,999,999,999,999], [499,500,501]))
else:
    pass
