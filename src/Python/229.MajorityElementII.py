
class Solution:
    def majorityElement(self, nums):
        major1 = 0
        cnt1 = 0
        major2 = 0
        cnt2 = 0
        n = len(nums)
        for i in range(n):
            if cnt1 == 0 and major2 != nums[i]:
                major1 = nums[i]
                cnt1 = 1
            elif cnt2 == 0 and major1 != nums[i]:
                major2 = nums[i]
                cnt2 = 1
            elif major1 == nums[i]:
                cnt1 += 1
            elif major2 == nums[i]:
                cnt2 += 1
            else:
                cnt1 -= 1
                cnt2 -= 1
        cnt1 = 0
        cnt2 = 0
        for i in range(n):
            if nums[i] == major1:
                cnt1 += 1
            elif nums[i] == major2:
                cnt2 += 1
        ans = []
        if cnt1 > n // 3:
            ans.append(major1)
        if cnt2 > n // 3:
            ans.append(major2)
        return ans


if __name__ == "__main__":
    solution = Solution()
    print(solution.majorityElement([3, 2, 3]))
    print(solution.majorityElement([1, 1, 1, 3, 3, 2, 2, 2]))

