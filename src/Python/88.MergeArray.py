
class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: void Do not return anything, modify nums1 in-place instead.
        """
        nums = []
        for i in range(m):
            nums.append(nums1[i])
        i = 0
        j = 0
        index = 0
        while i < m or j < n:
            if i == m:
                for k in range(j, n):
                    nums1[index] = nums2[k]
                    index += 1
                break
            if j == n:
                for k in range(i, m):
                    nums1[index] = nums[k]
                    index += 1
                break
            if nums[i] < nums2[j]:
                nums1[index] = nums[i]
                i += 1
            else:
                nums1[index] = nums2[j]
                j += 1
            index += 1
        return nums1

if __name__ == '__main__':
    solution = Solution()
    print(solution.merge([1,2,3,4,0,0,0,0,0],4, [2,5,6], 3))

else:
    pass
