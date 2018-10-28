
class Solution:
    def nextGreaterElement(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        m = len(nums1)
        n = len(nums2)
        r = [-1] * m
        for j in range(m):
            num = nums1[j]
            index = nums2.index(num)
            for i in range(index + 1, n):
                if nums2[i] > num:
                    r[j] = nums2[i]
                    break
        return r

if __name__ == '__main__':
    solution = Solution()
    print(solution.nextGreaterElement([4, 1, 2], [1, 3, 4, 2]))
    print(solution.nextGreaterElement([2, 4], [1, 2, 3, 4]))
    print(solution.nextGreaterElement([1, 2], [3, 2, 1]))
else:
    pass
