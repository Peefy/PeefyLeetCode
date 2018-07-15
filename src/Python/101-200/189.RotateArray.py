
from copy import deepcopy

class Solution:
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        k = k % n
        if k == 0:
            return nums   
        dir = 1 
        i = 0
        if k > n / 2:
            k = n - k
            dir = 0
            index = n - 1 - k
        else:
            index = k
        stackcount = 0
        stackstart = 0
        stackspace = k  
        if dir == 1:
            i = 0
            while i < n:
                while stackspace != 0 and stackcount >= stackspace:
                    stackcount = 0
                    for j in range(stackstart, stackspace):
                        nums[j], nums[index] = nums[index], nums[j]
                        stackcount += 1
                        if stackstart == index:
                            stackstart += 1
                            stackcount -= 1  
                        index += 1
                        if index >= n:
                            index -= n                                        
                if index == k - 1 and i != 0:
                    break
                nums[index], nums[i] = nums[i], nums[index]
                stackcount += 1
                i += 1
                index += 1
                if index >= n:
                    index -= n
            return nums
        else:
            i = n - 1
            while i >= 0:
                while stackspace != 0 and stackcount >= stackspace:
                    stackcount = 0
                    for j in range(stackstart, stackspace):
                        m = n - 1 - j
                        nums[m], nums[index] = nums[index], nums[m]
                        stackcount += 1
                        if n - 1 - stackstart == index:
                            stackstart += 1
                            stackcount -= 1  
                        index -= 1
                        if index < 0:
                            index += n                                       
                if index == n - 1 - k + 1 and i != n - 1:
                    break
                nums[index], nums[i] = nums[i], nums[index]
                stackcount += 1
                i -= 1
                index -= 1
                if index < 0:
                    index += n
            return nums

    def solve(self, nums, k):
        arr = deepcopy(nums)
        n = len(nums)
        k = k % n
        if k == 0:
            return
        for i in range(n):
            index = i + k
            if index >= n:
                index -= n
            nums[index] = arr[i]  
        return nums

if __name__ == '__main__':
    solution = Solution()
    print(solution.rotate([-1, -100, 3, 99], 4))
    print(solution.rotate([1, 2, 3, 4, 5, 6, 7], 2))
    print(solution.rotate([1, 2, 3, 4, 5, 6, 7], 5))
    print(solution.rotate([1, 2, 3, 4, 5, 6], 3))
    print(solution.solve([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27], 38))
else:
    pass
