class Solution:
    def searchRange(self, nums: 'List[int]', target: 'int') -> 'List[int]':
        left = 0
        right = len(nums) - 1
        ans = [-1, -1]
        while left <= right:
            middle = (left + right) >> 1
            if nums[middle] == target:
                ans = [middle, middle]
                while ans[0] - 1 >= 0 and nums[ans[0] - 1] == target: 
                    ans[0] -= 1
                while ans[1] + 1 < len(nums) and nums[ans[1] + 1] == target:
                    ans[1] += 1
                return ans
            elif nums[middle] < target:
                left = middle + 1
            else:
                right = middle - 1
        return ans

if __name__ == "__main__":
    solution = Solution()
    print(solution.searchRange(nums = [1], target = 1))
    print(solution.searchRange(nums = [5,7,7,8,8,10], target = 8))
    print(solution.searchRange(nums = [5,7,7,8,9,10], target = 8))
    print(solution.searchRange(nums = [5,7,7,8,8,10], target = 6))

