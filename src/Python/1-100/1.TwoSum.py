
class Solution:

    isfind = False

    def twoSum(self, nums, target):
        """
        :type nums: List[int]

        :type target: int

        :rtype: List[int]
        """
        n = len(nums)
        for i in range(n):
            for j in range(i + 1, n):
                if nums[i] + nums[j] == target:
                    return [i, j]

        # recursive call overflow
        # return self.__twoSum(nums, n - 1, target)
   
    def __twoSum(self, nums, index, target):
        if index >= 0 and self.isfind == False:
            result = self.__twoSum(nums, index - 1, target)
            if result != None:
                return result
        for i in range(index):
            self.isfind = (nums[i] + nums[index]) == target
            if self.isfind == True:
                return [i, index]

