
class Solution:
    def canPlaceFlowers(self, flowerbed, n):
        """
        :type flowerbed: List[int]
        :type n: int
        :rtype: bool
        """
        count = 0
        length = len(flowerbed)
        i = 0
        while i < length:
            if flowerbed[i] == 0:
                if i == length - 1:
                    count += 1
                    i += 1
                elif flowerbed[i + 1] == 0:
                    count += 1
                    i += 1
            elif flowerbed[i] == 1:
                i += 1
            i += 1
        return count >= n

if __name__ == '__main__':
    solution = Solution()
    print(solution.canPlaceFlowers(flowerbed = [1,0,0,0,1], n = 1))
    print(solution.canPlaceFlowers(flowerbed = [1,0,0,0,1,0,0], n = 2))
    print(solution.canPlaceFlowers(flowerbed = [1,0,0,0,0,1], n = 2))
    print(solution.canPlaceFlowers(flowerbed = [0,1,0], n = 1))
else:
    pass
