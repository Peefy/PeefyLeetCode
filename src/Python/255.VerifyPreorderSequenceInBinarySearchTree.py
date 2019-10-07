
class Solution:
    def verifyPreorde(self, nums):
        minnum = -99999999
        stack = []
        for num in nums:
            if num < minnum:
                return False
            while len(stack) > 0 and num > stack[-1]:
                minnum = stack.pop()
            stack.append(num)
        return True

    
if __name__ == "__main__":
    solution = Solution()
