
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.LargestTriangleArea
{
public class Solution {
    double heran(int[] point1, int[] point2, int[] point3){
        int x1 = point1[0];
        int y1 = point1[1];
        int x2 = point2[0];
        int y2 = point2[1];
        int x3 = point3[0];
        int y3 = point3[1];
        return 0.5 * Math.Abs(x1 * y2 + x2 * y3 + x3 * y1 - x1 *y3 - x2 * y1 - x3 * y2);
    }
    public double LargestTriangleArea(int[][] points) {
        int n = points.GetLength(0);
        double area = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; ++j){
                for (int k = j + 1; k < n; ++k){
                    area = Math.Max(area, heran(points[i], points[j], points[k]));
                }
            }
        }
        return area;
    }
}
}

