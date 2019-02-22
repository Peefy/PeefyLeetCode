class Solution:
    def search(self, nums: 'List[int]', target: 'int') -> 'int':
        rotateindex = 0
        n = len(nums)
        for i in range(n - 1):
            if nums[i] > nums[i + 1]:
                rotateindex = i + 1
                break
        left = 0
        right = n - 1
        while left <= right:
            middle = left + (right - left) // 2
            realindex = middle + rotateindex
            if realindex >= n:
                realindex -= n
            if nums[realindex] == target:
                return realindex
            elif nums[realindex] < target:
                left = middle + 1
            else:
                right = middle - 1
        return -1
            

if __name__ == "__main__":
    solution = Solution()
    print(solution.search(nums = [4,5,6,7,0,1,2], target = 0))
    print(solution.search(nums = [4,5,6,7,0,1,2], target = 3))

