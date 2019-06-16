
class Solution:
    def sortColors(self, nums: list) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        nums.sort()
        return nums
        

if __name__ == "__main__":
    solution = Solution()
    print(solution.sortColors([2,0,2,1,1,0]))
   