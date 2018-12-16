
class Solution:
    def floodFill(self, image, sr, sc, newColor):
        """
        :type image: List[List[int]]
        :type sr: int
        :type sc: int
        :type newColor: int
        :rtype: List[List[int]]
        """
        init = image[sr][sc]
        if init == newColor:
            return image
        image[sr][sc] = newColor
        if sr > 0 and image[sr - 1][sc] == init:
            image = self.floodFill(image , sr - 1 , sc , newColor)
        if sr < len(image) - 1 and image[sr + 1][sc] == init:
            image = self.floodFill(image , sr + 1 , sc , newColor)
        if sc > 0 and image[sr][sc-1] == init:
            image = self.floodFill(image , sr , sc - 1 , newColor)
        if sc < len(image[0]) - 1 and image[sr][sc + 1] == init:
            image = self.floodFill(image , sr , sc + 1 , newColor)
        return image

if __name__ == '__main__':
    solution = Solution()
    print(solution.floodFill(image=[[1, 1, 1], [1, 1, 0], [1, 0, 1]], \
        sr=1, sc=1, newColor=2))
else:
    pass

