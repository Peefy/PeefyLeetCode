
class Solution:
    def summaryRanges(self, nums):
        summary = []
        i = 0
        for j in range(len(nums)):
            if j + 1 < len(nums) and nums[j + 1] == nums[j] + 1:
                continue
            if i == j:
                summary.append(str(nums[i]))
            else:
                summary.append(str(nums[i]) + '->' + str(nums[j]))
            i = j + 1
        return summary


if __name__ == "__main__":
    solution = Solution()
    print(solution.summaryRanges([0, 1, 2, 4, 5, 7]))
    print(solution.summaryRanges([0, 2, 3, 4, 6, 8, 9]))

