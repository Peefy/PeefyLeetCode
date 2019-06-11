
class Solution:
    def search(self, nums: list, target: int) -> bool:
        left = 0
        right = len(nums) - 1
        if right == -1:
            return False
        k = 0 
        for i in range(1, right + 1):
            if nums[i] < nums[i - 1]:
                k = i
        while left <= right:
            beforemiddle = (left + right) // 2
            middle = beforemiddle + k
            if middle >= len(nums):
                middle = middle - len(nums)
            if target == nums[middle]:
                return True
            elif target < nums[middle]:
                right = beforemiddle - 1
            else:
                left = beforemiddle + 1
        return False


if __name__ == "__main__":
    solution = Solution()
    print(solution.search([2,5,6,0,0,1,2], 0))
    print(solution.search([2,5,6,0,0,1,2], 3))
    print(solution.search([3,1], 1))
    print(solution.search([1,3], 1))
   