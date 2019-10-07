
class Solution:
    def threeSumSmaller(self, nums, target):
        nums.sort()
        count = 0
        for i in range(len(nums) - 2):
            j = i + 1
            k = len(nums) - 1
            while j < k:
                if nums[i] + nums[j] + nums[k] < target:
                    count += k - j
                    j += 1
                else:
                    k -= 1
        return count

    
if __name__ == "__main__":
    solution = Solution()
