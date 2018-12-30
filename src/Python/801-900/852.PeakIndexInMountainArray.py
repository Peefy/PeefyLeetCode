class Solution:
    def peakIndexInMountainArray(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        left, right = 0, len(A)
        while left < right:
            mid = int((left + right) / 2)
            if A[mid] < A[mid + 1]:  
                left = mid + 1
            else:
                right = mid 
        return left


if __name__ == '__main__':
    solution = Solution()
    print(solution.peakIndexInMountainArray([0,2,1,0]))
else:
    pass
