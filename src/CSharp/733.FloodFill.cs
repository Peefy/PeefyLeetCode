using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.FloodFill
{
    public class Solution
    {
        public int[,] FloodFill(int[,] image, int sr, int sc, int newColor)
        {
            int oldColor = image[sr, sc];
            if (newColor == oldColor)
                return image;
            image[sr, sc] = newColor;
            if (sr - 1 >= 0 && image[sr - 1, sc] == oldColor)
            {
                image = FloodFill(image, sr - 1, sc, newColor);
            }
            if (sr + 1 < image.GetLength(0) && image[sr + 1, sc] == oldColor)
            {
                image = FloodFill(image, sr + 1, sc, newColor);
            }
            if (sc - 1 >= 0 && image[sr, sc - 1] == oldColor)
            {
                image = FloodFill(image, sr, sc - 1, newColor);
            }
            if (sc + 1 < image.GetLength(1) && image[sr, sc + 1] == oldColor)
            {
                image = FloodFill(image, sr, sc + 1, newColor);
            }
            return image;
        }
    }
}

