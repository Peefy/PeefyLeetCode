
class Solution:
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        return list(set(nums1) & set(nums2))
            
if __name__ == '__main__':
    solution = Solution()
    print(solution.intersection([1, 2, 2, 1], [2, 2]))
else:
    pass
