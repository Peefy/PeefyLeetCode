
class Solution:
    def checkPossibility(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        if len(nums) <= 2: 
            return True
        count = 0 if nums[0] <= nums[1] else 1 
        for i in range(2, len(nums)):
            if nums[i - 1] > nums[i]:
                count += 1
                if count > 1:
                    return False
                if nums[i - 2] > nums[i]: 
                    nums[i] = nums[i - 1]  
                else:
                    nums[i - 1] = nums[i - 2] 
        return count <= 1

if __name__ == '__main__':
    solution = Solution()
    print(solution.checkPossibility([4, 2, 3]))
    print(solution.checkPossibility([4, 2, 1]))
    print(solution.checkPossibility([-1, 4, 2, 3]))
    print(solution.checkPossibility([3, 4, 2, 3]))
else:
    pass