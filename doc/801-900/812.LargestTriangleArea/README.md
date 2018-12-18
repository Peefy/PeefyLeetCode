
# problem 812 : LargestTriangleArea

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/812.LargestTriangleArea/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    double heran(vector<int> point1, vector<int> point2, vector<int> point3){
        int x1 = point1[0];
        int y1 = point1[1];
        int x2 = point2[0];
        int y2 = point2[1];
        int x3 = point3[0];
        int y3 = point3[1];
        return 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y1 - x1 *y3 - x2 * y1 - x3 * y2);
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();
        double area = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; ++j){
                for (int k = j + 1; k < n; ++k){
                    area = max(area, heran(points[i], points[j], points[k]));
                }
            }
        }
        return area;
    }
};

```

## C# Solution

```csharp

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

```

## Java Solution

```java

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

```

## Python Solution

```python

class Solution:

    def heran(self, point1, point2, point3):
        x1 = point1[0]
        y1 = point1[1]
        x2 = point2[0]
        y2 = point2[1]
        x3 = point3[0]
        y3 = point3[1]
        return 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y1 - x1 *y3 - x2 * y1 - x3 * y2)

    def largestTriangleArea(self, points):
        """
        :type points: List[List[int]]
        :rtype: float
        """
        n = len(points)
        area = 0
        for i in range(n):
            for j in range(i, n):
                for k in range(j, n):
                    area = max(area, self.heran(points[i], points[j], points[k]))
        return area
        

```





