
class Solution:
    def hIndex(self, citations):
        n = len(citations)
        if n == 0 or citations[-1] == 0:
            return 0
        left = 0
        right = n - 1
        while left < right:
            mid = left + (right - left) // 2
            if citations[mid] < n - mid:
                left = mid + 1
            else:
                right = mid
        return n - left


if __name__ == "__main__":
    solution = Solution()
    print(solution.hIndex([0, 1, 2, 5, 6]))
    print(solution.hIndex([0, 1, 3, 5, 6]))

