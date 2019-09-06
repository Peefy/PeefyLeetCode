
import heapq

class Solution:
    def findKthLargest(self, nums, k):
        return heapq.nlargest(k, nums)[-1]


if __name__ == "__main__":
    solution = Solution()
    print(solution.findKthLargest([3,2,1,5,6,4], 2))
    print(solution.findKthLargest([3,2,3,1,2,4,5,5,6], 4))
