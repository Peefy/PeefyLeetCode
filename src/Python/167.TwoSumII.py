
class Solution:
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        n = len(numbers)
        d = {}
        index = []
        if n < 2:
            return None
        d[numbers[0]] = 0
        for i in range(1, n):
            sub = target - numbers[i]
            if sub in d.keys():
                index.append(d[sub] + 1)
                index.append(i + 1)
                return index
            else:
                d[numbers[i]] = i
        return None

if __name__ == '__main__':
    solution = Solution()
    print(solution.twoSum([2, 7, 11, 15], 18))
else:
    pass
