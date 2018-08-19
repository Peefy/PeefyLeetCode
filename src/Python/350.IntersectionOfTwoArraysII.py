
class Solution:
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        nums1, nums2 = sorted(nums1), sorted(nums2)
        ans = []
        i, j = 0, 0
        while i < len(nums1) and j < len(nums2):
            if nums1[i] == nums2[j]:
                ans.append(nums1[i])
                i += 1
                j += 1
            elif nums1[i] < nums2[j]:
                i += 1
            elif nums1[i] > nums2[j]:
                j += 1
        return ans
            
if __name__ == '__main__':
    solution = Solution()
    print(solution.intersection([1, 2, 2, 1], [2, 2]))
    print(solution.intersection([4, 9, 5], [9, 4, 9, 8, 4]))
else:
    pass
