
class NumArray:

    def __init__(self, nums):
        """
        :type nums: List[int]
        """
        n = len(nums)
        self.arr = []
        if n == 0:
            return
        self.arr.append(nums[0])
        for i in range(1, n):
            self.arr.append(self.arr[i - 1] + nums[i])

    def sumRange(self, i, j):
        """
        :type i: int
        :type j: int
        :rtype: int
        """
        if i == 0:
            return self.arr[j]
        return self.arr[j] - self.arr[i - 1]
    
if __name__ == '__main__':
    obj = NumArray([-2, 0, 3, -5, 2, -1])
    print(obj.sumRange(0, 2))
    print(obj.sumRange(3, 5))
    print(obj.sumRange(0, 5))
else:
    pass
