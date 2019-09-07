
class Solution:
    def containsNearbyAlmostDuplicate(self, nums, k, t):
        if t < 0:
            return False
        n = len(nums)
        d = {}
        w = t + 1
        for i in range(n):
            m = nums[i] // w
            if m in d:
                return True
            if m - 1 in d and abs(nums[i] - d[m - 1]) < w:
                return True
            if m + 1 in d and  abs(nums[i] - d[m + 1]) < w:
                return True
            d[m] = nums[i]
            if i >= k:
                del d[nums[i - k] // w]
        return False


if __name__ == "__main__":
    solution = Solution()
    print(solution.containsNearbyAlmostDuplicate([1, 2, 3, 1], 3, 0))
    print(solution.containsNearbyAlmostDuplicate([1, 0, 1, 1], 1, 2))
    print(solution.containsNearbyAlmostDuplicate([1, 5, 9, 1, 5, 9], 1, 2))

