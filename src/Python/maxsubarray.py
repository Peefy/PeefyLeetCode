
class Solution:
    def __merge_maxSubArray(self, nums, max1tuple, max2tuple):
        max1, left1, right1 = max1tuple
        max2, left2, right2 = max2tuple
        if max1 > max2:
            if max1 + nums[left2] > max1:
                return (max1 + nums[left2], left1, left2)
            else:
                return max1tuple
        else:
            if max2 + nums[right1] > max2:
                return max2 + nums[right2], right1, right2
            else:
                return max2tuple

    def __maxSubArray(self, nums, i, j):
        if j > i:
            k = (i + j) // 2
            max1tuple = self.__maxSubArray(nums, i, k)
            max2tuple = self.__maxSubArray(nums, k + 1, j)
            return self.__merge_maxSubArray(nums, max1tuple, max2tuple) 
        else:
            return (nums[i], i , j)

    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """ 
        n = len(nums)
        return self.__maxSubArray(nums, 0, n - 1)[0]

         
if __name__ == '__main__':
    solution = Solution()
    print(solution.maxSubArray([1, -2, 1, 4, -5]))
    print(solution.maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4]))
else:
    pass



