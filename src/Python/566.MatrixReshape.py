
class Solution:
    def matrixReshape(self, nums, r, c):
        """
        :type nums: List[List[int]]
        :type r: int
        :type c: int
        :rtype: List[List[int]]
        """
        m = len(nums)
        n = len(nums[-1])
        if m * n != r * c:
            return nums
        mat = []
        for i in range(r):
            mat.append([])
            for j in range(c):
                index = i * c + j
                row = index // n
                column = index - row * n
                mat[i].append(nums[row][column])
        return mat

if __name__ == '__main__':
    solution = Solution()
    print(solution.matrixReshape([[1,2],[3,4]],1,4))
else:
    pass
