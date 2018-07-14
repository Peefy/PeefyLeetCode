
class Solution:
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        if k % n == 0:
            return nums   
        stackcount = 0
        i = 0
        stackstart = 0
        while i < n:
            index = i + k
            if index >= n:
                index -= n
                stackstart += 1
            tmp = nums[index]
            nums[index] = nums[i]
            nums[i] = tmp
            if i == n - 1:
                break
            stackcount += 1
            while stackcount >= k:
                stackcount = 0
                for j in range(k):
                    i = index + 1
                    tmp = nums[j]
                    nums[j] = nums[i]
                    nums[i] = tmp
                    index += 1
                    stackcount += 1
                    if i == n - 1:
                        break
            i += 1          
        tail = nums[k - 1]
        for i in range(k - 1):
            j = k - 1- i
            nums[j] = nums[j - 1]
        nums[0] = tail
        return nums

if __name__ == '__main__':
    solution = Solution()
    print(solution.rotate([-1, -100, 3, 99], 4))
    print(solution.rotate([1, 2, 3, 4, 5, 6, 7], 4))
else:
    pass
