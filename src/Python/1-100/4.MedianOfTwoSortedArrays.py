
import math

class Solution:
    def findMedianSortedArrays(self, nums1 : list, nums2 : list):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        m = len(nums1)
        n = len(nums2)
        nums1.append(math.inf)
        nums2.append(math.inf)
        total = m + n
        one = (total + 1) // 2
        two = (total + 2) // 2
        i = 0
        j = 0
        count = 0
        median1 = 0
        median2 = 0
        while True:
            min = -math.inf
            if nums1[i] < nums2[j]:
                min = nums1[i]
                i += 1
            else:
                min = nums2[j]
                j += 1
            count += 1
            if count == one:
                median1 = min
            if count == two:
                median2 = min
                break
        return (median1 + median2) / 2
        
if __name__ == '__main__':
    solution = Solution()
    print(solution.findMedianSortedArrays([1,3],[2, 4]))
    print(solution.findMedianSortedArrays([1,2],[3,4,5,6]))
