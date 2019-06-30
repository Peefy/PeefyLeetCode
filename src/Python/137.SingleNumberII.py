
class Solution:
    def singleNumber(self, nums):
        b1,b2 = 0,0
        for n in nums:
            b1 = (b1 ^ n) & ~ b2 
            b2 = (b2 ^ n) & ~ b1
        return b1


if __name__ == "__main__":
    solution = Solution()
    print(solution.singleNumber([1]))
    print(solution.singleNumber([2,2,1,2]))
    print(solution.singleNumber([2,2,3,2]))
    print(solution.singleNumber([2,2,3,2, 1, 1, 1]))
    print(solution.singleNumber([2,2,3,2, 0, 1, 0, 1, 0, 1]))
    print(solution.singleNumber([0,1,0,1,0,1,97]))
    print(solution.singleNumber([-1,-1,-1,23]))
    print(solution.singleNumber([-2,-2,1,1,-3,1,-3,-3,-4,-2]))
    print(solution.singleNumber([0,2,0,1,2,1,97,2,0,1]))
        