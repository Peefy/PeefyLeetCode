
class Solution:
    def constructRectangle(self, area):
        """
        :type area: int
        :rtype: List[int]
        """
        primes = 1
        n = area
        index = int(n ** 0.5)
        while index >= 1:
            if area % index == 0:
                factor = area // index 
                if factor >= index:
                    return [factor, index]
            index -= 1
        return [1, 1]

if __name__ == '__main__':
    solution = Solution()
    print(solution.constructRectangle(1))
    print(solution.constructRectangle(2))
    print(solution.constructRectangle(3))
    print(solution.constructRectangle(4))
    print(solution.constructRectangle(5))
    print(solution.constructRectangle(6))
    print(solution.constructRectangle(8))
    print(solution.constructRectangle(12))
else:
    pass
