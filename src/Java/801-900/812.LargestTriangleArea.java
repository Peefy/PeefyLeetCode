
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Set;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    double heran(int[] point1, int[] point2, int[] point3){
        int x1 = point1[0];
        int y1 = point1[1];
        int x2 = point2[0];
        int y2 = point2[1];
        int x3 = point3[0];
        int y3 = point3[1];
        return 0.5 * Math.abs(x1 * y2 + x2 * y3 + x3 * y1 - x1 *y3 - x2 * y1 - x3 * y2);
    }
    
    public double largestTriangleArea(int[][] points) {
        int n = points.length;
        double area = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; ++j){
                for (int k = j + 1; k < n; ++k){
                    area = Math.max(area, heran(points[i], points[j], points[k]));
                }
            }
        }
        return area;
    }
}
