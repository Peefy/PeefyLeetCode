
class Solution:
    def removeDuplicates(self, nums : list) -> int:
        i = 0
        k = 2
        for n in nums:
            if i < k or n != nums[i - k]:
                nums[i] = n
                i += 1
        return i

if __name__ == "__main__":
    solution = Solution()
    print(solution.removeDuplicates([1, 1, 1, 2, 2, 3]))
   