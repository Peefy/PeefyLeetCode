
class Solution:
    def singleNumber(self, nums):
        sign = 0
        for num in nums:
            sign = sign ^ num
        sign &= -sign
        re = [0] * 2
        for num in nums:
            if num & sign == sign:
                re[0] ^= num
            else:
                re[1] ^= num
        return re

    
if __name__ == "__main__":
    solution = Solution()
    print(solution.singleNumber([1, 2, 1, 3, 2, 5]))