
class Solution:
    def removeDuplicates(self, nums : list) -> int:
        n = len(nums)
        if n == 0:
            return 0
        second = 0
        count = 1
        before = nums[0]
        for i in range(1, n):
            if nums[i] == before:
                count += 1
            else:
                if count > 2:
                    nums[second] = nums[i]
            if count == 3:
                second = i
            before = nums[i]
        return nums    

if __name__ == "__main__":
    solution = Solution()
    print(solution.removeDuplicates([1, 1, 1, 2, 2, 3]))
   