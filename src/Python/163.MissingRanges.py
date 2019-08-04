
class Solution:
    def findMissingRanges(self, nums, lower, upper):
        expected = lower
        newUpper = upper
        ret = []
        for i in range(len(nums) + 1):
            if i < len(nums) and nums[i] < expected:
                continue
            val = newUpper + 1 if i == len(nums) else nums[i]
            if expected != val and expected + 1 == val:
                ret.append(str(expected))
            elif expected != val:
                ret.append(str(expected) + '->' + str(val - 1))
            expected = val + 1
        return ret


if __name__ == "__main__":
    solution = Solution()
    print(solution.findMissingRanges([0, 1, 3, 50, 75], 0, 99))
